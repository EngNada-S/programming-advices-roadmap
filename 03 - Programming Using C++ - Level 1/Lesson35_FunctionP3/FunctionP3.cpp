#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const float PI = 3.14;

//p1
void printName() {
    cout << "Nada Salem" << endl;
}

//p2
void printEnteredName(string Name) {
    cout << Name << endl;
}

//p14
void SwapNumbers(int num1, int num2) {
    cout << num1 << endl;
    cout << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << endl;
    cout << num2 << endl;
}

//p15
float  RectangleAreaMethod1(float a, float b) {
    return a * b;
}

//p16
float  RectangleAreaMethod2(float a, float d) {
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

//p18
float CircleAreaMethod1(float r) {
    return PI * pow(r, 2);
}

//p19
float CircleAreaMethod2(float D) {
    return (PI * pow(D, 2)) / 4;
}

//p20
float CircleAreaMethod3(float A) {
    return (PI * pow(A, 2)) / 4;
}

//p21
float CircleAreaMethod4(float l) {
    return pow(l, 2) / (4 * PI);
}

//p22
float CircleAreaMethod5(float a, float b) {
    return ((PI * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));
}

//p23
float CircleAreaMethod6(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    T = T * T;
    return PI * T;
}

//p31
void NumberPowers(int num) {
    int numPow2 = pow(num, 2);
    int numPow3 = pow(num, 3);
    int numPow4 = pow(num, 4);
    cout << numPow2 << endl;
    cout << numPow3 << endl;
    cout << numPow4 << endl;
}

//p32
int NumberPowerM(int num, int power) {
    return pow(num, power);
}

//p42
int TotalSecods(int days, int hours, int minutes, int seconds) {
    int totalsec = seconds + minutes * 60 + hours * 60 * 60 + days * 24 * 60 * 60;
    return totalsec;
}

//p43
string SecondsToDaysHoursMinutesSeconds(int totalsec) {
    int days = totalsec / (24 * 60 * 60);
    int remainder = totalsec % (24 * 60 * 60);
    int hours = remainder / (60 * 60);
    remainder %= (60 * 60);
    int minutes = remainder / 60;
    remainder %= 60;
    int seconds = remainder;
    return to_string(days) + ":" + to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}

int main()
{
    printName();
    cout << "-----------------------------------------------------\n";
    printEnteredName("Nada Salem");
    cout << "-----------------------------------------------------\n";
    SwapNumbers(10, 20);
    cout << "-----------------------------------------------------\n";
    cout << RectangleAreaMethod1(10, 20) << endl;
    cout << "-----------------------------------------------------\n";
    cout << RectangleAreaMethod2(5, 40) << endl;
    cout << "-----------------------------------------------------\n";
    cout << CircleAreaMethod1(5) << endl;
    cout << "-----------------------------------------------------\n";
    cout << CircleAreaMethod2(10) << endl;
    cout << "-----------------------------------------------------\n";
    cout << CircleAreaMethod3(10) << endl;
    cout << "-----------------------------------------------------\n";
    cout << CircleAreaMethod4(20) << endl;
    cout << "-----------------------------------------------------\n";
    cout << CircleAreaMethod5(20, 10) << endl;
    cout << "-----------------------------------------------------\n";
    cout << CircleAreaMethod6(5, 6, 7) << endl;
    cout << "-----------------------------------------------------\n";
    NumberPowers(3);
    cout << "-----------------------------------------------------\n";
    cout << NumberPowerM(2, 4) << endl;
    cout << "-----------------------------------------------------\n";
    cout << TotalSecods(2, 5, 45, 35) << " seconds\n";
    cout << "-----------------------------------------------------\n";
    cout << SecondsToDaysHoursMinutesSeconds(193535) << endl;

}