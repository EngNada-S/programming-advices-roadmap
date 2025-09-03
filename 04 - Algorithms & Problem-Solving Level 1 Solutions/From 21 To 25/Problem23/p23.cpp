#include <iostream>
using namespace std;

void ReadNumbers(float& a, float& b,float& c) {
    cout << "please enter a?\n";
    cin >> a;
    cout << "please enter b?\n";
    cin >> b;
    cout << "please enter c?\n";
    cin >> c;
}
float CircleAreaDescribedAroundTriangle(float a, float b,float c) {
    const float PI = 3.141592653;
    float p = (a + b + c) / 2;
    float T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    T = pow(T, 2);
    float area = PI*T;
    return area;
}
void PrintArea(float area) {
    cout << "Circle area: " << area << endl;
}
int main()
{
    float a, b,c;
    ReadNumbers(a, b,c);
    PrintArea(CircleAreaDescribedAroundTriangle(a, b,c));
}
