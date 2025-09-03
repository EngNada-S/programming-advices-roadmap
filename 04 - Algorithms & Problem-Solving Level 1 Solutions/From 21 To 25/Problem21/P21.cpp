#include <iostream>
using namespace std;

float ReadNumbers() {
    float L;
    cout << "please enter alue of L?\n";
    cin >> L;
    return L;
}
float CircleAreaUsingCircumference(float l) {
    const float PI = 3.141592653;
    return pow(l,2)/(4*PI);
}
void PrintArea(float area) {
    cout << "Circle area: " << area << endl;
}
int main()
{
    PrintArea(CircleAreaUsingCircumference(ReadNumbers()));
}
