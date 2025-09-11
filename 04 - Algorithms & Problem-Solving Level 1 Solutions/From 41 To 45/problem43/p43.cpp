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

stDuration SecondsToDays_Hours_Minutes_Seconds(int seconds) {
    stDuration duration;
    int SecPerDay = 24 * 60 * 60;
    int SecPerHour = 60 * 60;
    int SecPerMin = 60;
    int remainder=0;

    duration.days = seconds / SecPerDay;
    remainder = seconds % SecPerDay;
    duration.hours = remainder / SecPerHour;
    remainder = remainder % SecPerHour;
    duration.minutes = remainder / SecPerMin;
    remainder = remainder % SecPerMin;
    duration.seconds = remainder;

    return duration;

}

void PrintResult(stDuration duration) {
    cout << "\nduration in format days:hours:minutes:seconds\n";
    cout << duration.days << ":" << duration.hours << ":" << duration.minutes << ":" << duration.seconds << endl;
}

int main()
{
    int TotalSec = ReadPositiveNumber("Please enter Number of Seconds?");
    PrintResult(SecondsToDays_Hours_Minutes_Seconds(TotalSec));
    
}
