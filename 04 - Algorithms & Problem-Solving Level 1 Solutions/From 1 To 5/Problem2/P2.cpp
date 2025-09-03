#include <iostream>
#include <string>
using namespace std;

string ReadName() {
    string name;
    cout << "Please Enter Your Name?\n";
    getline(cin,name);
    return name;
}
void PrintYourName(string name) {
    cout << "Your Name Is " << name << endl;
}

int main()
{
    PrintYourName(ReadName());
    return 0;
}
