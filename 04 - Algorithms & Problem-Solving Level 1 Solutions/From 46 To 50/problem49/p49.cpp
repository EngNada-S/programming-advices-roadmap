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
bool CheckPINCode() {
    int pin = 0;
    do {
        pin = ReadPositiveNumber("please enter pin?");
        if (pin == 1234) {
            return true;
        }
        else {
            system("color 4f");
            cout << "\nWrong PIN\n";
        }
    } while (pin != 1234);
}
void PrintResult() {
    if (CheckPINCode()) {
        int palance = 7500;
        system("color 2f");
        cout << "\nYour Palance is: " << palance << endl;
    }
}
int main()
{
    PrintResult();
}
