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
    int pin = 0,counter=3;
    do {
        counter--;
        pin = ReadPositiveNumber("please enter pin?");
        if (pin == 1234) {
            return true;
        }
        else {
            cout << "\nWrong PIN you have more " << counter << " tries.\n";
            system("color 4f");
        }
        
    } while (pin != 1234 && counter >=1);
    return false;
}
void PrintResult() {
    if (CheckPINCode()) {
        int palance = 7500;
        system("color 2f");
        cout << "\nYour Palance is: " << palance << endl;
    }
    else {
        cout << "\nCard Locked :(\n";
    }
}
int main()
{
    PrintResult();
    //system("color 0f")
}
