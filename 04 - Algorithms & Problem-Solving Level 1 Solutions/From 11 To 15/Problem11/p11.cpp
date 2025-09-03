#include <iostream>
using namespace std;

enum enPassOrFail{pass=1,fail=2};

void ReadNumbers(int& num1, int& num2, int& num3) {
    cout << "please enter num1?\n";
    cin >> num1;
    cout << "please enter num2?\n";
    cin >> num2;
    cout << "please enter num3?\n";
    cin >> num3;
}

int Sum3Numbers(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

float AverageOfNumbers(int num1, int num2, int num3) {
    return (float)Sum3Numbers(num1, num2, num3) / 3;
}

enPassOrFail CheckAverage(float average) {
    if (average >= 50)
        return enPassOrFail::pass;
    else
        return enPassOrFail::fail;
}

void PrintResults(float average) {
    cout << "\nYour Average is " << average << endl;
    if (CheckAverage(average) == enPassOrFail::pass)
        cout << "you pass :)\n";
    else
        cout << "you fail :(\n";
}
int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResults(AverageOfNumbers(num1, num2, num3));
}

