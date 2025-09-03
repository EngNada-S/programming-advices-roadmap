#include <iostream>
using namespace std;

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
float AerageOfNumbers(int num1, int num2, int num3) {
    return (float)Sum3Numbers(num1, num2, num3) / 3;
}
void PrintResults(float average) {
    cout << "Aerage Of 3 Numbers is " << average << endl;
}
int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResults(AerageOfNumbers(num1, num2, num3));
}

