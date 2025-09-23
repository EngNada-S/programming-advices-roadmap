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

int digitFrequency(int digit, int num) {
    int remainder;
    int count = 0;
    while (digit % 10 != 0) {
        remainder = digit % 10;
        digit = digit / 10;
        if (remainder == num) count++;
    }
    return count;
}

int main() {
    int digit = ReadPositiveNumber("please enter digit: ");
    int number = ReadPositiveNumber("please enter number: ");
    cout << "Digit " << number << " frequency is " << digitFrequency(digit, number) << " time(s)." << endl;
    return 0;
}
