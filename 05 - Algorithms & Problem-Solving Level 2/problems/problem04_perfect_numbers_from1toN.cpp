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

bool isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= round(num / 2); i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return num == sum;
}

void PrintPerfectNumbersFrom1ToN(int num) {
    for (int i = 1; i <= num; i++) {
        if (isPerfectNumber(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("please enter value of N?"));
    return 0;
}
