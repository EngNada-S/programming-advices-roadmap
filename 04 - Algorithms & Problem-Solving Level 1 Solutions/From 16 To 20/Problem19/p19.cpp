#include <iostream>
using namespace std;

float ReadNumbers() {
    float diameter;
    cout << "please enter diameter?\n";
    cin >> diameter;
    return diameter;
}
float CircleAreaUsingDiameter(float D) {
    const float PI = 3.141592653;
    return (PI * pow(D, 2))/4;
}
void PrintArea(float area) {
    cout << "Circle area: " << area << endl;
}
int main()
{
    PrintArea(CircleAreaUsingDiameter(ReadNumbers()));
}
