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

void PrintResults(int num) {
    if (isPerfectNumber(num)) {
        cout << num << " is perfect number\n";
    }
    else {
        cout << num << " is not perfect number\n";
    }
}

int main() {
    PrintResults(ReadPositiveNumber("please enter value of N?"));
    return 0;
}
