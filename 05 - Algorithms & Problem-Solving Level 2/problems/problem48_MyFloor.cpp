#include <iostream>
using namespace std;

float ReadNumber() {
	float num;
	cout << "Please Enter a Number: ";
	cin >> num;
	return num;
}

float MyFloor(float num) {
	if (num > 0)
		return int(num);
	else
		return int(num) - 1;
}

int main() {
	float num = ReadNumber();
	cout << "My floor Function : " << MyFloor(num) << endl;
	cout << "c++ floor Function : " << floor(num) << endl;
	return 0;
}