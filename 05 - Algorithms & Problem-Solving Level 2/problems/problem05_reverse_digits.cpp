#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg) {
    int num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);
    return num;
}

void PrintPerfectNumbersFrom1ToN(int num) {
    int digit;
    while (num % 10 != 0) {
        digit = num % 10;
        cout << digit << endl;
        num = num / 10;
    }
}

int main() {
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("please enter digits?"));
    return 0;
}
