#include <iostream>
using namespace std;

void ReadNumbers(float & a,float &b) {
    cout << "please enter a?\n";
    cin >> a;
    cout << "please enter b?\n";
    cin >> b;
}
float CircleAreaInscribedInTriangle(float a,float b) {
    const float PI = 3.141592653;
    float area = ((PI * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));
    return area;
}
void PrintArea(float area) {
    cout << "Circle area: " << area << endl;
}
int main()
{
    float a, b;
    ReadNumbers(a,b);
    PrintArea(CircleAreaInscribedInTriangle(a,b));
}
