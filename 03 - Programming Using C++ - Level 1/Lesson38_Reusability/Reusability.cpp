#include <iostream>
#include <string>
using namespace std;

struct stPersonInfo {
    string name;
    int age;
    string city;
    string country;
    float MonthlySalary;
    char Gender;
    bool isMarried;
};

void ReadPersonInfo(stPersonInfo& Info) {
    cout << "Please enter name?\n";
    getline(cin, Info.name);
    cout << "Please enter age?\n";
    cin >> Info.age;
    cout << "Please enter city?\n";
    cin >> Info.city;
    cout << "Please enter country?\n";
    cin >> Info.country;
    cout << "Please enter MonthlySalary?\n";
    cin >> Info.MonthlySalary;
    cout << "Please enter Gender?\n";
    cin >> Info.Gender;
    cout << "Please enter status?\n";
    cin >> Info.isMarried;
}

void PrintPersonInfo(stPersonInfo Info) {
    cout << "********************" << endl;
    cout << "Name :" << Info.name << endl;
    cout << "Age :" << Info.age << " years" << endl;
    cout << "City :" << Info.city << endl;
    cout << "Country :" << Info.country << endl;
    cout << "MonthlySalary :" << Info.MonthlySalary << endl;
    cout << "YearlySalary :" << Info.MonthlySalary * 12 << endl;
    cout << "Gender :" << Info.Gender << endl;
    cout << "Married :" << Info.isMarried << endl;
    cout << "********************" << endl << endl;
}
int main()
{
    stPersonInfo person1;
    ReadPersonInfo(person1);
    PrintPersonInfo(person1);
    return 0;
}
