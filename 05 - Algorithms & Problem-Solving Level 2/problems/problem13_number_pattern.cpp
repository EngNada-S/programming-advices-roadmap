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

void NumberPattern(int num) {
    cout << endl;
    for (int i = 1; i <=num; i++) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
}
int main() {
    NumberPattern(ReadPositiveNumber("please enter the number: "));
    return 0;
}