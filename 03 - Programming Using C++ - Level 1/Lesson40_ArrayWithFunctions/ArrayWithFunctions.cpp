#include <iostream>
using namespace std;

void ReadNumbers(float nums[3]) {
    cout << "enter number1?\n";
    cin >> nums[0];
    cout << "enter number2?\n";
    cin >> nums[1];
    cout << "enter number3?\n";
    cin >> nums[2];
}
float AverageOfNumbers(float nums[3]) {
    return (nums[0] + nums[1] + nums[2]) / 3;
}
int main()
{
    float numbers[3];
    ReadNumbers(numbers);
    cout << AverageOfNumbers(numbers) << endl;
}
