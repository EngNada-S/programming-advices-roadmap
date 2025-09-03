#include <iostream>
using namespace std;

int ReadAge() {
    short age;
    cout << "please enter your age?\n";
    cin >> age;
    return age;
}
bool ValidateAgeInRange(short age, short from, short to) {
    return age >= from && age <= to;
}
void PrintResult(bool check) {
    if (check)
        cout << "\n valid age\n";
    else
        cout << "\n Invalid age\n";
}
int main()
{
    PrintResult(ValidateAgeInRange(ReadAge(),18,45));
}

