#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string string1, string2, string3;
    cout << "please enter string1?\n";
    getline(cin, string1);
    cout << "\n";
    cout << "please enter string2?\n"; //5
    cin >> string2;
    cout << "\n";
    cout << "please enter string3?\n"; //10
    cin >> string3;
    cout << "\n";
    cout << "*****************************************\n";
    cout << "the length of string 1 is : " << string1.length() << endl;
    cout << "characters at 0,2,4,7 are : " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;
    cout << "concating string 2 and string 3 = " << string2 + string3 << endl;
    cout << string2 << " * " << string3 << " = " << stoi(string2) * stoi(string3) << endl;
    return 0;
}

