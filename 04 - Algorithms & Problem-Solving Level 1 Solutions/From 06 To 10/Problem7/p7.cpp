#include <iostream>
using namespace std;

int ReadNumber() {
    int num;
    cout << "please enter your number? ";
    cin >> num;
    return num;
}
float HalfNumber(int num) {
    return (float)num / 2;
}
void PrintResult(int num) {
    cout << "Half Number is " << HalfNumber(num) << endl;
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}
