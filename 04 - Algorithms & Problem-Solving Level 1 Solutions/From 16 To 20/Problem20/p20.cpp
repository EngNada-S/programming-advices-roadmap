#include <iostream>
using namespace std;

float ReadNumbers() {
    float A;
    cout << "please enter square side length?\n";
    cin >> A;
    return A;
}
float CircleAreaInscribedInSquare(float A) {
    const float PI = 3.141592653;
    return (PI * pow(A, 2)) / 4;
}
void PrintArea(float area) {
    cout << "Circle area: " << area << endl;
}
int main()
{
    PrintArea(CircleAreaInscribedInSquare(ReadNumbers()));
}
