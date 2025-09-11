#include <iostream>
using namespace std;

float ReadPositiveNumber(string msg) {
    float num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);
    return num;
}
float InstallmentAmont(float loan, float NumOfMonths) {
    return loan / NumOfMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("please enter loan amount?");
    float NumOfMonths = ReadPositiveNumber("please enter number of months?");
    cout << "\nNumber of months: " << InstallmentAmont(LoanAmount, NumOfMonths) << endl;
}
