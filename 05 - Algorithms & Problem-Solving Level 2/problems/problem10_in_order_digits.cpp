#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg) {
    int num;
    do {
        cout << msg;
        cin >> num;
    } while (num < 0);
    return num;
}

int reverseNumber(int num) {
    int digit;
    int reversedNum = 0;
    while (num % 10 != 0) {
        digit = num % 10;
        num = num / 10;
        reversedNum = reversedNum * 10 + digit;
    }
    return reversedNum;
}

void printDigits(int num) {
    int digit;
    while (num % 10 != 0) {
        digit = num % 10;
        cout << digit << endl;
        num = num / 10;
    }
}

int main() {
    printDigits(reverseNumber(ReadPositiveNumber("please enter digit: ")));
    return 0;
}
