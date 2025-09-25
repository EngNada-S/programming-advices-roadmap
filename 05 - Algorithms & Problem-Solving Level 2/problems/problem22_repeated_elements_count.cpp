#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg) {
	int num;
	do {
		cout << msg;
		cin >> num;
	} while (num < 0);
	return num;
}

void ReadArrayElements(int arr[100], int length) {
	cout << "\nEnter Array Elements: \n";
	for (int i = 0; i < length; i++) {
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
}

void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

int CountNumInArray(int arr[100], int length, int num) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (num == arr[i]) count++;
	}
	return count;
}

int main() {

	int arr[100];
	int length = ReadPositiveNumber("please enter length of array: ");
	ReadArrayElements(arr, length);

	int numToCheck = ReadPositiveNumber("\nplease enter the number you want to check: ");

	cout << "\nOriginal array: ";
	PrintArray(arr, length);

	cout << endl << numToCheck << " is repeated " << CountNumInArray(arr, length, numToCheck) << " Time(s).\n";

	return 0;
}