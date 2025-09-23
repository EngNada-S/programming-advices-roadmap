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

bool isPalindromeNumber(int num) {
    return num == reverseNumber(num);
}
int main() {
    int num = ReadPositiveNumber("please enter the number : ");

    if (isPalindromeNumber(num)) {
        cout << "yes, it is a palindrome number.\n";
    }
    else {
        cout << "no, it is not a palindrome number.\n";
    }
	return 0;
}