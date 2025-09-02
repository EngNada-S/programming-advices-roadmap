#include <iostream>
using namespace std;

void MySumProcedural() {
    int num1, num2;
    cout << "please enter num1?\n";
    cin >> num1;
    cout << "please enter num2?\n";
    cin >> num2;
    cout << "sum of two numbers = " << num1 + num2 << endl;
}
int MySumFunction() {
    int num1, num2;
    cout << "please enter num1?\n";
    cin >> num1;
    cout << "please enter num2?\n";
    cin >> num2;
    return num1 + num2;
}
int main()
{
    MySumProcedural();
    cout << "---------------------\n";
    int sum = MySumFunction();
    cout << "sum of two numbers = " << sum << endl;
}
