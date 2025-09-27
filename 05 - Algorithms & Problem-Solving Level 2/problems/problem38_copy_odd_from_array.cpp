#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enNumberType { even = 1, odd = 2 };

enNumberType CheckNumberType(int num) {
	int result = num % 2;
	if (result == 0) {
		return enNumberType::even;
	}
	else {
		return enNumberType::odd;
	}
}

int ReadPositiveNumber(string msg) {
	int num;
	do {
		cout << msg;
		cin >> num;
	} while (num < 0);
	return num;
}

int RandomNumber(int from, int to) {
	return  rand() % (to - from + 1) + from;
}

void FillArrayWithRandoms(int arr[100], int& length) {
	length = ReadPositiveNumber("please enter length of array: ");
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

void AddArrayElement(int num, int arr[100], int& length) {
	length++;
	arr[length - 1] = num;
}

void CopyOddsFromArray(int arr1[100], int copyArr[100], int length1, int& length2) {
	for (int i = 0; i < length1; i++) {
		if (CheckNumberType(arr1[i]) == enNumberType::odd) {
			AddArrayElement(arr1[i], copyArr, length2);
		}
	}
}

int main() {
	srand((unsigned)time(NULL));

	int arr1[100], copyArr[100];
	int arr1Length, arr2Length = 0;

	FillArrayWithRandoms(arr1, arr1Length);
	cout << "\nArray 1 Elements: \n";
	PrintArray(arr1, arr1Length);

	CopyOddsFromArray(arr1, copyArr, arr1Length, arr2Length);
	cout << "\nArray 2 odd Numbers: \n";
	PrintArray(copyArr, arr2Length);

	return 0;
}


