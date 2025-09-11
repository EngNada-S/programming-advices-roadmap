#include <iostream>
using namespace std;

enum enIsPrime{Prime=1,NotPrime=2};
float ReadPositieNumbedr(string msg) {
    float num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);
    return num;
}
enIsPrime IsPrime(int num) {
    int HalfNum = round(num / 2);
    for (int i = 2; i <= HalfNum; i++) {
        if (num % i == 0) {
            return enIsPrime::NotPrime;
        }
    }
    return enIsPrime::Prime;
}
void PrintResult(int num) {
    if (IsPrime(num) == enIsPrime::Prime)
        cout << "\n number is prime.\n";
    else
        cout << "\n number is not prime.\n";
}

int main()
{
    PrintResult(ReadPositieNumbedr("Please enter a positive number?"));
    return 0;
}
