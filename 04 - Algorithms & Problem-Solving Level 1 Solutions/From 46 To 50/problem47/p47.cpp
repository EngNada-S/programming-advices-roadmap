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
float NumberOfMonths(float loan, float monthlyPaid) {
    return loan / monthlyPaid;
}


int main()
{
    float LoanAmount = ReadPositiveNumber("please enter loan amount?");
    float MonthlyPaid = ReadPositiveNumber("please enter monthly paid?");
    cout << "\nNumber of months: " << NumberOfMonths(LoanAmount, MonthlyPaid) << endl;
}
