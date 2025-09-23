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

void LetterPattern(int num) {
    cout << endl;
    for (int i = 65; i <= (65 + num - 1); i++) {
        for (int j = 1; j <= (i-65+1); j++) {
            cout << char(i);
        }
        cout << endl;
    }
}
int main() {
    LetterPattern(ReadPositiveNumber("please enter the number: "));
    return 0;
}