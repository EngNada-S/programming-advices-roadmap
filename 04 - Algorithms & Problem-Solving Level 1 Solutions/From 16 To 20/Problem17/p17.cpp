#include <iostream>
using namespace std;

void ReadNumbers(float& a, float& h) {
    cout << "please enter a?\n";
    cin >> a;
    cout << "please enter h?\n";
    cin >> h;
}
float TriangleArea(float a, float h) {
    return (a*h)/2;
}
void PrintArea(float area) {
    cout << "Triangle area: " << area << endl;
}
int main()
{
    float a, h;
    ReadNumbers(a, h);
    PrintArea(TriangleArea(a, h));
}
