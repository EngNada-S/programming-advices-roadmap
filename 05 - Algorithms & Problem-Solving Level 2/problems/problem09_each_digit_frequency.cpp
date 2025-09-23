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

void EachDigitFrequency(int digit) {
    for (int i = 0; i <= 9; i++) {
        int count = 0;
        count = digitFrequency(digit, i);
        if (count > 0) {
            cout << "Digit " << i << " frequecy is " << count << " time(s).\n";
        }
    }
}
int main() {
    int digit = ReadPositiveNumber("please enter digit: ");
    EachDigitFrequency(digit);
    return 0;
}
