#include <iostream>
using namespace std;

struct stPersonInfo {
    string firstName;
    string lastName;
    int age;
    string phone;
};

void ReadInfo(stPersonInfo& person) {
    cout << "Please enter first name?\n";
    cin >> person.firstName;
    cout << "Please enter last name?\n";
    cin >> person.lastName;
    cout << "Please enter age?\n";
    cin >> person.age;
    cout << "Please enter phone?\n";
    cin >> person.phone;
}

void PrintInfo(stPersonInfo person) {
    cout << "First Name :" << person.firstName << endl;
    cout << "Last Name :" << person.lastName << endl;
    cout << "Age :" << person.age << " years" << endl;
    cout << "Phone :" << person.phone << endl;
}

void ReadPersonInfo(stPersonInfo arrOfPersons[100], int& Length) {
    cout << "Select Number of Persons : ";
    cin >> Length;
    for (int i = 0; i <= Length - 1; i++) {
        cout << "**************************\n";
        cout << "         Person " << i + 1 << endl;
        cout << "**************************\n";

        ReadInfo(arrOfPersons[i]);
    }
}

void PrintPersonInfo(stPersonInfo arrOfPersons[100], int Length) {
    for (int i = 0; i <= Length - 1; i++) {
        cout << "**************************\n";
        cout << "         Person " << i + 1 << endl;
        cout << "**************************\n";

        PrintInfo(arrOfPersons[i]);
    }
}

int main()
{
    stPersonInfo arrOfPersons[100];
    int Length = 0;
    ReadPersonInfo(arrOfPersons, Length);
    cout << "----------------------------------------------\n";
    PrintPersonInfo(arrOfPersons, Length);
}
