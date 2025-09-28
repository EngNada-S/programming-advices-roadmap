#include <iostream>
using namespace std;

float ReadNumber() {
	float num;
	cout << "Please Enter a Number: ";
	cin >> num;
	return num;
}

float MySqrt(float num) {
	return pow(num, 0.5);
}

int main() {
	float num = ReadNumber();
	cout << "My sqrt Function : " << MySqrt(num) << endl;
	cout << "c++ sqrt Function : " << sqrt(num) << endl;
	return 0;
}