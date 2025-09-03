#include <iostream>
using namespace std;

struct stName {
    string firstName;
    string LastName;
};
stName ReadName() {
    stName name;
    cout << "please enter your first name?\n";
    cin >> name.firstName;
    cout << "please enter your last name?\n";
    cin >> name.LastName;
    return name;
}
string FullName(stName name) {
    return name.firstName + " " + name.LastName;
}
void PrintName(string name) {
    cout << "\nYour Name is " << name << endl;
}

int main()
{
    PrintName(FullName(ReadName()));
    return 0;
}
