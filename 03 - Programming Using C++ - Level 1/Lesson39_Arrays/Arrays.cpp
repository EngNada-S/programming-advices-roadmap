#include <iostream>
using namespace std;

int main()
{
    float grades[3];
    cout << "enter first grade? ";
    cin >> grades[0];
    cout << "enter second grade? ";
    cin >> grades[1];
    cout << "enter third grade? ";
    cin >> grades[2];
    float average = (grades[0] + grades[1] + grades[2]) / 3;
    cout << average;
    return 0;
}
