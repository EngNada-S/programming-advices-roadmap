#include <iostream>
using namespace std;

float ReadPositieNumbedr(string msg) {
    float num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);
    return num;
}

float HoursToDays(float NumOfHours) {
    return NumOfHours / 24;
}

float DaysToWeeks(float NumOFDays) {
    return NumOFDays / 7;
}
float HoursToWeeks(float NumOfHours) {
    return NumOfHours/24 / 7;
}

int main()
{
    float hours = ReadPositieNumbedr("please enter total number of hours?");
    cout << "\nTotal Hours: " << hours << endl;
    cout << "Number of weeks: " << DaysToWeeks(HoursToDays(hours)) << endl;
    cout << "Number of weeks: " << HoursToWeeks(hours) << endl;
    cout << "Number of days: " << HoursToDays(hours) << endl;

}
