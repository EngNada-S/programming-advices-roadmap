#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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

void FillArrayWithRandoms(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

void CopyArray(int arr1[100], int arr2[100], int length) {
	for (int i = 0; i < length; i++) {
		arr2[i] = arr1[i];
	}
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100], copyArr[100];
	int length = ReadPositiveNumber("please enter length of array: ");

	FillArrayWithRandoms(arr, length);
	cout << "\nArray 1 Elements: \n";
	PrintArray(arr, length);

	CopyArray(arr, copyArr, length);
	cout << "\nArray 2 Elements after copy: \n";
	PrintArray(copyArr, length);

	return 0;
}