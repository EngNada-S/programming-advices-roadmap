#include <iostream>
using namespace std;

float ReadNumber() {
	float num;
	cout << "Please Enter a Number: ";
	cin >> num;
	return num;
}

float GetFraction(float num) {
	return abs(num - (int)num);
}

float MyCeil(float num) {
	float fractionPart = GetFraction(num);
	if (fractionPart != 0) {
		if (num > 0) {
			return int(num) + 1;
		}
		else {
			return int(num);
		}
	}
	else {
		return num;
	}
}

int main() {
	float num = ReadNumber();
	cout << "My ceil Function : " << MyCeil(num) << endl;
	cout << "c++ ceil Function : " << ceil(num) << endl;
	return 0;
}