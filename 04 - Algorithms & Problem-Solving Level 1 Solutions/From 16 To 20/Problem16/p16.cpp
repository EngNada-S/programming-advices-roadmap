#include <iostream>
using namespace std;

void ReadNumbers(float& a, float& b) {
    cout << "please enter diagonal?\n";
    cin >> a;
    cout << "please enter side length?\n";
    cin >> b;
}
float RectangeAreaByDiagonalAndSide(float a, float b) {
    return b*sqrt(pow(a,2)-pow(b,2));
}
void PrintArea(float area) {
    cout << "Rectangle Area By Diagonal And side length: " << area << endl;
}
int main()
{
    float a, b;
    ReadNumbers(a, b);
    PrintArea(RectangeAreaByDiagonalAndSide(a,b));
}
