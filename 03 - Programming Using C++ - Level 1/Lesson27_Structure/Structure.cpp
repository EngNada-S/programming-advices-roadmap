#include <iostream>
using namespace std;

struct media {
    string gmail;
    string phone;
    string facebook;
};
struct PersonDetails {
    string Name;
    short int Age;
    string city;
    string country;
    float MonthlySalary;
    char gender;
    bool IsMarried;
    media contact;
};

int main()
{
    PersonDetails person;
    person.Name = "Nada Salem";
    person.Age = 24;
    person.city = "Alex";
    person.country = "Egypt";
    person.MonthlySalary = 1000;
    person.gender = 'F';
    person.IsMarried = 0;
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
    cout << "IsMarried : " << person.IsMarried << endl;
    cout << "Contact : " << endl;
    cout << "  - Email: " << person.contact.gmail << endl;
    cout << "  - Phone: " << person.contact.phone << endl;
    cout << "  - Facebook: " << person.contact.facebook << endl;
    cout << "**************************\n";
    
    return 0;
}
