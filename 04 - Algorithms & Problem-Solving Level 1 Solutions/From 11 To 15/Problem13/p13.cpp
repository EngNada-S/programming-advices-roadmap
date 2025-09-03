#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2,int & num3) {
    cout << "please enter num 1?\n";
    cin >> num1;
    cout << "please enter num 2?\n";
    cin >> num2;
    cout << "please enter num 3?\n";
    cin >> num3;
}
int CheckMaxNumber(int num1, int num2,int num3) {
    if (num1 > num2) {
        return (num1 > num3) ? num1 : num3;
    }
    else {
        return (num2 > num3) ? num2 : num3;

    }
}
void PrintResults(int max) {
    cout << "\nMax Number is " << max << endl;
}
int main()
{
    int num1, num2,num3;
    ReadNumbers(num1, num2,num3);
    PrintResults(CheckMaxNumber(num1, num2,num3));
}
