#include <iostream>
#include <cmath>
using namespace std;

//ENUMS
enum enGender{ Male='M', Female='F' };
enum enStatus{single,married};

//STRUCTS
struct media {
    string gmail;
    string phone;
    string facebook;
};
struct PersonDetails {
    string Name;
    unsigned short int Age;
    string city;
    string country;
    unsigned int MonthlySalary;
    media contact;
    enGender gender;
    enStatus status;
};

int main()
{
    PersonDetails person;
    person.Name = "Nada Salem";
    person.Age = 24;
    person.city = "Alex";
    person.country = "Egypt";
    person.MonthlySalary = 1000;
    person.gender = enGender::Female;
    person.status = enStatus::single;
    person.contact.gmail = "test@gmail.com";
    person.contact.phone = "246653334668";
    person.contact.facebook = "www.facebook.com";

    cout << "**************************\n";
    cout << "Name : " << person.Name <<endl;
    cout << "Age : " << person.Age <<" years" << endl;
    cout << "City : " << person.city <<endl;
    cout << "Country : " << person.country <<endl;
    cout << "MonthlySalary : " << person.MonthlySalary << endl;
    cout << "yearlySalary : " << person.MonthlySalary * 12 << endl;
    cout << "Gender : " << char(person.gender) << endl;
    cout << "IsMarried : " << person.status << endl;
    cout << "Contact : " << endl;
    cout << "  - Email: " << person.contact.gmail << endl;
    cout << "  - Phone: " << person.contact.phone << endl;
    cout << "  - Facebook: " << person.contact.facebook << endl;
    cout << "**************************\n";
    
    return 0;
}