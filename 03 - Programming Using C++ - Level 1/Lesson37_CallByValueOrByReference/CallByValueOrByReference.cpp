#include <iostream>
using namespace std;

void swap(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "Swap in Function: num1 = " << num1 << ", num2 = " << num2 << endl;
}

int main()
{
	int num1 = 1;
	int num2 = 2;
	cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
	swap(num1, num2);
	cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
}