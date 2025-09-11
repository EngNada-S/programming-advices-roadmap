#include <iostream>
using namespace std;

enum enNumberType{even=1,odd=2};

int ReadNumber() {
    int N;
    cout << "please enter value of N?\n";
    cin >> N;
    return N;
}

enNumberType CheckNumberType(int num) {
    if (num % 2 == 0) {
        return enNumberType::even;
    }
    else {
        return enNumberType::odd;
    }
}

int SumOddNumbers1ToN(int N) {
    int sum = 0;
    for (int i = 1; i <=N; i++) {
        if (CheckNumberType(i) == enNumberType::odd) {
            sum += i;
        }
    }
    return sum;
}

void PrintSumOfOdds(int sum) {
    cout << "\n sum of odds : " << sum << endl;
}

int main()
{
    int N = ReadNumber();
    PrintSumOfOdds(SumOddNumbers1ToN(N));
}
