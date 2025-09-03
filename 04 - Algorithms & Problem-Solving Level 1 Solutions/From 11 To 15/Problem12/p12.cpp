#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2) {
    cout << "please enter num 1?\n";
    cin >> num1;
    cout << "please enter num 2?\n";
    cin >> num2;
}
int CheckMaxNumber(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void PrintResults(int max) {
    cout << "\nMax Number is " << max << endl;
}
int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintResults(CheckMaxNumber(num1, num2));
}
