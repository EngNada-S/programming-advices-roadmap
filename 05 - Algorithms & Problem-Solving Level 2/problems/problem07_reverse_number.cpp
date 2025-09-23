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

int main() {
    cout << "reversed Number is " << reverseNumber(ReadPositiveNumber("please enter digits?"));
    return 0;
}
