#include <iostream>
using namespace std;

void ReadNumbers(float& length, float& width) {
    cout << "please enter length?\n";
    cin >> length;
    cout << "please enter width?\n";
    cin >> width;
}
float CalculateRectangleArea(float length, float width) {
    return length * width;
}
void PrintResults(float area) {
    cout << "Rectangle Area: " << area << endl;
}

int main()
{
    float length, width;
    ReadNumbers(length, width);
    PrintResults(CalculateRectangleArea(length,width));
}
