#include <iostream>
using namespace std;

enum enOperatorType{Add='+', Sub = '-', Mult = '*', Div = '/' };

float ReadNumber(string msg) {
    float num;
    cout << msg << endl;
    cin >> num;
    return num;
}

enOperatorType Operator() {
    char OperatorType='+';
    cout << "please enter operator?\n";
    cin >> OperatorType;
    return (enOperatorType)OperatorType;
}

float SimpleCalculator(float num1, float num2, enOperatorType op) {
    switch (op) {
    case enOperatorType::Add:
        return num1 + num2;
    case enOperatorType::Sub:
        return num1 - num2;
    case enOperatorType::Mult:
        return num1 * num2;
    case enOperatorType::Div:
        return num1 / num2;
    default:
        return num1 + num2;
    }
}

int main()
{
    float num1, num2;
    num1 = ReadNumber("please enter number1?");
    num2 = ReadNumber("please enter number2?");
    enOperatorType OpType = Operator();
    cout<<"Result = "<<SimpleCalculator(num1, num2, OpType);
}