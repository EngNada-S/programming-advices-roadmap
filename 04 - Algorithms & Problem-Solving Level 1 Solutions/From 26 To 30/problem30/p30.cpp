#include <iostream>
using namespace std;

int ReadNumber(string msg) {
    int Number;
    do {
        cout << msg << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}
int FactorialOfN(int N) {
    int factorial = 1;
    for (int i = N; i >= 1; i--) {
        factorial *= i;
    }
    return factorial;
}
void PrintFactorial(int fac) {
    cout << "\n Factorial is : " << fac << endl;
}

int main()
{
    PrintFactorial(FactorialOfN(ReadNumber("Enter N ?")));
    return 0;
}
