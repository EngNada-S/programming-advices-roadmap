#include <iostream>
using namespace std;

enum enPrimeOrNot { prime = 1, notPrime = 2 };

int ReadPositiveNumber(string msg) {
    int num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);
    return num;
}

enPrimeOrNot isPrime(int num) {
    int M = round(num / 2);
    for (int i = 2; i <= M; i++) {
        if (num % i == 0) {
            return enPrimeOrNot::notPrime;
        }
    }
    return enPrimeOrNot::prime;
}

void PrintPrimeNumbersFrom1ToN() {
    int num = ReadPositiveNumber("please enter value of N?");
    cout << "\nThe prime Numbers from 1 to " << num << " : \n";
    for (int i = 1; i <= num; i++) {
        if (isPrime(i) == enPrimeOrNot::prime) {
            cout << i << endl;
        }
    }
}

int main() {
    PrintPrimeNumbersFrom1ToN();
    return 0;
}
