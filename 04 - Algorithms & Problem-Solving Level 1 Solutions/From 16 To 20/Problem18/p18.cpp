#include <iostream>
using namespace std;

void ReadNumbers(float& r) {
    cout << "please enter radius?\n";
    cin >> r;
}
float CircleArea(float r) {
    const float PI = 3.141592653;
    return PI*pow(r,2);
}
void PrintArea(float area) {
    cout << "Circle area: " << area << endl;
}
int main()
{
    float r;
    ReadNumbers(r);
    PrintArea(CircleArea(r));
}
