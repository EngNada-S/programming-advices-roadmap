#include <iostream>c
#include <cmath>
using namespace std;

int main()
{
    //prop 16
    /*float a, d;
    cout << "please enter value of a?\n";
    cin >> a;
    cout << "please enter value of d?\n";
    cin >> d;
    float area = a * sqrt(pow(d, 2) - pow(a, 2));
    cout << "-------------------------\n";
    cout << "area : " << area << endl;*/

    //prop 18
    /*const float PI = 3.14;
    float r;
    cout << "please enter value of radius r?\n";
    cin >> r;
    float area = ceil(PI * pow(r,2));
    cout << "-------------------------\n";
    cout << "area : " << area << endl;*/

    //prop 19
    /*const float PI = 3.14;
    float D;
    cout << "please enter value of diameter D?\n";
    cin >> D;
    float area = ceil((PI * pow(D, 2))/4);
    cout << "-------------------------\n";
    cout << "area : " << area << endl;*/

    //20
    /*const float PI = 3.14;
    float A;
    cout << "please enter value of length A?\n";
    cin >> A;
    float area = ceil((PI * pow(A, 2)) / 4);
    cout << "-------------------------\n";
    cout << "area : " << area << endl;*/

    //prop 21
    /*const float PI = 3.14;
    float a,b;
    cout << "please enter value of a?\n";
    cin >> a;
    cout << "please enter value of b?\n";
    cin >> b;
    float area = (PI*pow(b,2)/4)*((2*a-b)/(2*a+b));
    cout << "-------------------------\n";
    cout << "area : " << floor(area) << endl;*/

    //prop 31
    /*float num;
    cout << "please enter number?\n";
    cin >> num;
    float numPower2 = round(pow(num, 2));
    float numPower3 = round(pow(num, 3));
    float numPower4 = round(pow(num, 4));
    cout << "-------------------------\n";
    cout << "Number power 2 : " << numPower2 << endl;
    cout << "Number power 3 : " << numPower3 << endl;
    cout << "Number power 4 : " << numPower4 << endl;*/

    //prop 32
    /*float num ,M;
    cout << "please enter number?\n";
    cin >> num;
    cout << "please enter power?\n";
    cin >> M;
    cout << "-------------------------\n";
    cout << "Number power " <<M<<" : " << round(pow(num,M)) << endl;*/

    //prop 42
    /*float  days, hours, minutes,seconds;
    cout << "please enter number of days?\n";
    cin >> days;
    cout << "please enter number of hours?\n";
    cin >> hours;
    cout << "please enter number of minutes?\n";
    cin >> minutes;
    cout << "please enter number of seconds?\n";
    cin >> seconds;
    cout << "-------------------------\n";
    cout << round(seconds+minutes*60+hours*60*60+days*24*60*60) << " seconds"<< endl;*/

    //prop 43
    unsigned int TotalSeconds, days, hours, minutes, seconds;
    cout << "Please enter total seconds: ";
    cin >> TotalSeconds;

    const unsigned int SecondsPerDay = 24 * 60 * 60;
    const unsigned int SecondsPerHour = 60 * 60;
    const unsigned int SecondsPerMinute = 60;

    days = TotalSeconds / SecondsPerDay;
    unsigned int remainder = TotalSeconds % SecondsPerDay;
    hours = remainder / SecondsPerHour;
    remainder = remainder % SecondsPerHour;
    minutes = remainder / SecondsPerMinute;
    seconds = remainder % SecondsPerMinute;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
