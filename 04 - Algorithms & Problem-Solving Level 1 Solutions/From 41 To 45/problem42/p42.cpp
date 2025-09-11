#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg) {
    int number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number < 0);
    return number;
}
struct stDuration {
    float days, hours, minutes, seconds;
};
stDuration ReadDurations() {
    stDuration duration;
    duration.days = ReadPositiveNumber("please enter number of days?");
    duration.hours = ReadPositiveNumber("please enter number of hours?");
    duration.minutes = ReadPositiveNumber("please enter number of minutes?");
    duration.seconds = ReadPositiveNumber("please enter number of seconds?");
    return duration;
}
float TotalSeconds(stDuration duration) {
    return duration.seconds + duration.minutes * 60 + duration.hours * 60 * 60 + duration.days * 24 * 60 * 60;
}

int main()
{
    cout << "\n Total Seconds : " << TotalSeconds(ReadDurations()) << endl;
}