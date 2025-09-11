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
void PrintPowers2_3_4(int num) {
    int a = num * num;
    int b = num * num * num;
    int c = num * num * num * num;
    cout << "\nPowers are: \n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
int main()
{
    PrintPowers2_3_4(ReadPositiveNumber("please enter the number?"));
}
