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

void InvertedLetterPattern(int num) {
    cout << endl;
    for (int i = (65 + num - 1); i >= 65; i--) {
        for (int j = num - (65 + num - 1 - i); j >= 1; j--) {
            cout << char(i);
        }
        cout << endl;
    }
}
int main() {
    InvertedLetterPattern(ReadPositiveNumber("please enter the number: "));
    return 0;
}