#include <iostream>
using namespace std;

enum enNumberType { even = 1, odd = 2 };

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

int SumEvenNumbers1ToN(int N) {
    int sum = 0;
    int i = 0;
    while (i < N) {
        i++;
        if (CheckNumberType(i) == enNumberType::even) {
            sum += i;
        }
    }
    return sum;
}

void PrintSumOfEvens(int sum) {
    cout << "\n sum of evens : " << sum << endl;
}

int main()
{
    int N = ReadNumber();
    PrintSumOfEvens(SumEvenNumbers1ToN(N));
}
