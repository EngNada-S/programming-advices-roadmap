#include <iostream>
using namespace std;

float ReadPositieNumbedr(string msg) {
    float num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);
    return num;
}

float CalculateRemainder(float TotalBill, float CashPaid) {
    return TotalBill - CashPaid;
}
int main()
{
    float TotalBill = ReadPositieNumbedr("enter total bill?");
    float CashPaid = ReadPositieNumbedr("enter cash paid?");
    cout << "\nTotalBill : " << TotalBill << endl;
    cout << "CashPaid: " << CashPaid << endl;
    cout << "_________________________\n";
    cout << "Remainder : " << CalculateRemainder(TotalBill, CashPaid) << endl;
}