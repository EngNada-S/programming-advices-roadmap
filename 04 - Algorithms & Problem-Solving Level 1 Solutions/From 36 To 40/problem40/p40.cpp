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

float TotalBillWithSalesTax_Service(float BillValue) {
    BillValue = 1.1 * BillValue;
    BillValue = 1.16 * BillValue;
    return BillValue;
}
int main()
{
    float BillValue = ReadPositieNumbedr("enter bill value?");
    
    cout << "Total Bill : " << TotalBillWithSalesTax_Service(BillValue) << endl;
}