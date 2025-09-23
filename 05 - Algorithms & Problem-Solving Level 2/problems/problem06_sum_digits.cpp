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
int SumOfDigits(int num) {
    int digit = 0, sum = 0;
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    return sum;
}
int main()
{
    cout << "\nSum Of Digits: " << SumOfDigits(ReadPositiveNumber("Please enter number ?")) << endl;
    ;
    return 0;
}