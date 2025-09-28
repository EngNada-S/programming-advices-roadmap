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

float MyRound(float num) {
	float fractionPart = GetFraction(num);
	int intPart = num;
	if (fractionPart >= 0.5) {
		if (num > 0) {
			return intPart + 1;
		}
		else {
			return intPart - 1;
		}
	}
	else {
		return intPart;
	}
}

int main() {
	float num = ReadNumber();
	cout << "My round Function : " << MyRound(num) << endl;
	cout << "c++ round Function : " << round(num) << endl;
	return 0;
}