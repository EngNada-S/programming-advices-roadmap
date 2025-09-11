#include <iostream>
using namespace std;

enum enDayOfWeek { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saterday = 7 };

int ReadNumberInRange(string msg, int from, int to) {
    int num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < from || num > to);

    return num;
}

enDayOfWeek DayAccordingToNumber() {
    int num = ReadNumberInRange("Please enter number(sun=1,mon=2,tues=3,wed=4,thur=5,fri=6,sut=7)", 1, 7);
    return (enDayOfWeek)num;
}

void PrintDay(enDayOfWeek day) {
    switch (day) {
    case enDayOfWeek::Sunday:
        cout << "Sunday";
        break;
    case enDayOfWeek::Monday:
        cout << "Monday";
        break;
    case enDayOfWeek::Tuesday:
        cout << "Tuesday";
        break;
    case enDayOfWeek::Wednesday:
        cout << "Wednesday";
        break;
    case enDayOfWeek::Thursday:
        cout << "Thursday";
        break;
    case enDayOfWeek::Friday:
        cout << "Friday";
        break;
    case enDayOfWeek::Saterday:
        cout << "Saterday";
    }
}
int main()
{
    PrintDay(DayAccordingToNumber());
}
