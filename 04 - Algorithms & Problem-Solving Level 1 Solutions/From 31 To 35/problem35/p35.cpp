#include <iostream>
using namespace std;

struct stPiggyBankCalculator {
    int  Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankCalculator ReadPiggyBankCalculator() {
    stPiggyBankCalculator PiggyBankCalculator;
    cout << "please enter Pennies?\n";
    cin >> PiggyBankCalculator.Pennies;
    cout << "please enter Nickels ?\n";
    cin >> PiggyBankCalculator.Nickels;
    cout << "please enter Dimes ?\n";
    cin >> PiggyBankCalculator.Dimes;
    cout << "please enter Quarters ?\n";
    cin >> PiggyBankCalculator.Quarters;
    cout << "please enter Dollars ?\n";
    cin >> PiggyBankCalculator.Dollars;
    return PiggyBankCalculator;
}

int CalculateTotalPennies(stPiggyBankCalculator PiggyBankCalculator) {
    int pennies = PiggyBankCalculator.Pennies * 1 +
        PiggyBankCalculator.Nickels * 5 +
        PiggyBankCalculator.Dimes * 10 +
        PiggyBankCalculator.Quarters * 25 +
        PiggyBankCalculator.Dollars * 100;
    return pennies;
}

int main()
{
    stPiggyBankCalculator money = ReadPiggyBankCalculator();
    cout << "total pennies = " << CalculateTotalPennies(money) << endl;
    cout << "total dollars = " << (float)CalculateTotalPennies(money) / 100 << endl;

}

