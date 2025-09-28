#include <iostream>
using namespace std;

float ReadNumber() {
	float num;
	cout << "Please Enter a Number: ";
	cin >> num;
	return num;
}

float MyAbs(float num) {
	if (num < 0) {
		return -1 * num;
	}
	else {
		return num;
	}
}

int main() {
	float num = ReadNumber();
	cout << "My Abs Function : " << MyAbs(num) << endl;
	cout << "c++ Abs Function : " << abs(num) << endl;
	return 0;
}