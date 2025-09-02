#include <iostream>
using namespace std;

struct stPersonInfo {
    string firstName;
    string lastName;
    int age;
    string phone;
};

void ReadInfo(stPersonInfo& person) {
    cout << "Please enter your first name?\n";
    cin >> person.firstName;
    cout << "Please enter your last name?\n";
    cin >> person.lastName;
    cout << "Please enter your age?\n";
    cin >> person.age;
    cout << "Please enter your phone?\n";
    cin >> person.phone;
}

void PrintInfo(stPersonInfo person) {
    cout << "********************" << endl;
    cout << "First Name :" << person.firstName << endl;
    cout << "Last Name :" << person.lastName << endl;
    cout << "Age :" << person.age << " years" << endl;
    cout << "Phone :" << person.phone << endl;
    cout << "********************" << endl << endl;
}

void ReadPersonInfo(stPersonInfo arrOfPersons[2]) {
    ReadInfo(arrOfPersons[0]);
    cout << "-------------------------------------------\n";
    ReadInfo(arrOfPersons[1]);
    cout << "-------------------------------------------\n";
}

void PrintPersonInfo(stPersonInfo arrOfPersons[2]) {
    PrintInfo(arrOfPersons[0]);
    PrintInfo(arrOfPersons[1]);
}

int main() {
    stPersonInfo personsInfo[2];
    ReadPersonInfo(personsInfo);
    PrintPersonInfo(personsInfo);
    return 0;
}