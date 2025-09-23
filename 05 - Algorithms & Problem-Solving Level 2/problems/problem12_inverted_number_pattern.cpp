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

void InvertedNumberPattern(int num) {
    cout << endl;
    for (int i = num; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
}
int main() {
    InvertedNumberPattern(ReadPositiveNumber("please enter the number: "));
    return 0;
}