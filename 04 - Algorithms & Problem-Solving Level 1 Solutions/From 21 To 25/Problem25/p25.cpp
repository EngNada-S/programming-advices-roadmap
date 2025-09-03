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

int CheckUntillValid() {
    short age = 0;
    do {
        age = ReadAge();
    } while (!ValidateAgeInRange(age,18,45));
    return age;
}

void PrintResults(short age) {
    cout << "\n Your age is : " << age << endl;
}

int main()
{
    PrintResults(CheckUntillValid());
}

