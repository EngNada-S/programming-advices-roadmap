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
int CalculteNPowerM(int num, int power) {
    int result = 1;
    if (power == 0) return result;
    for (int i = 1; i <= power; i++) {
        result *= num;
    }
    return result;
}
int main()
{
    int num, power;
    num = ReadPositiveNumber("please enter the number?");
    power = ReadPositiveNumber("please enter the power?");
    cout << "\npower is " << CalculteNPowerM(num, power) << endl;
    return 0;
}
