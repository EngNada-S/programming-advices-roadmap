#include <iostream>
using namespace std;

void PrintFrom1ToN(int N) {
    int i = 1;
    while (i <= N) {
        cout << i << endl;
        i++;
    }
}
void PrintFromNTo1(int N) {
    int i = N;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }
}
int sumOddsFrom1ToN(int N) {
    int i = 1;
    int sum = 0;
    while (i <= N) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    return sum;
}
void sumEvensFrom1ToN(int N) {
    int i = 1;
    int sum = 0;
    while (i <= N) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}
void factorialOfN() {
    int N;
    cout << "please enter the Number?";
    cin >> N;

    while (N <= 0) {
        cout << "Wrong Number, please enter a positive number : ";
        cin >> N;
    }
    int factorial = 1;
    int temp = N;
    while (temp >= 1) {
        factorial *= temp;
        temp--;
    }
    cout << "factorial of " << N << " is " << factorial << endl;
}
void power() {
    int number, power;
    int result = 1;
    cout << "please enter number ? ";
    cin >> number;
    cout << "please enter power ? ";
    cin >> power;
    int i = 1;
    while (i <= power) {
        result *= number;
        i++;
    }
    cout << result << endl;
}
void sumUntilnegative99() {
    int num;
    cout << "please enter the number? ";
    cin >> num;

    int sum = 0;
    while (num != -99) {
        sum += num;
        cout << "please enter the number? ";
        cin >> num;
    }
    cout << sum << endl;
}
void printFromAToZ() {
    int i = 65;
    while (i <= 90) {
        cout << char(i) << endl;
        i++;
    }
}
void PIN() {
    int pin;
    int failCheck = 0;
    do {
        cout << "please enter pin code ? ";
        cin >> pin;
        if (pin == 1234) {
            int balance = 7500;
            cout << "\nYour Balane is " << balance << endl;
            return;
        }
        else {
            failCheck++;
        }
    } while (failCheck < 3);
    cout << "\nCard Locked.\n";

}
int main()
{
    PrintFrom1ToN(10);
    cout << "------------------------------------\n";
    PrintFromNTo1(10);
    cout << "------------------------------------\n";
    cout << sumOddsFrom1ToN(10) << endl;
    cout << "------------------------------------\n";
    sumEvensFrom1ToN(10);
    cout << "------------------------------------\n";
    factorialOfN();
    cout << "------------------------------------\n";
    power();
    cout << "------------------------------------\n";
    sumUntilnegative99();
    cout << "------------------------------------\n";
    printFromAToZ();
    cout << "------------------------------------\n";
    PIN();
}
