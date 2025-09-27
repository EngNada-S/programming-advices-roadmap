#include <iostream>
using namespace std;

void FillArray(int arr[100], int& length) {
	length = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

int FindNumberInArray(int arr[100], int length, int num) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num) return i;
	}
	return -1;
}

bool IsNumberInArray(int num, int arr[100], int length)
{
	return FindNumberInArray(arr, length, num) != -1;
}

void AddArrayElement(int num, int arr[100], int& length) {
	length++;
	arr[length - 1] = num;
}

void CopyDistinctNumbersFromArray(int arr1[100], int copyArr[100], int length1, int& length2) {
	for (int i = 0; i < length1; i++) {
		if (!IsNumberInArray(arr1[i], copyArr, length2)) {
			AddArrayElement(arr1[i], copyArr, length2);
		}
	}
}

int main() {
	int arr1[100], copyArr[100];
	int arr1Length = 0, arr2Length = 0;

	FillArray(arr1, arr1Length);
	cout << "Array 1 Elements: \n";
	PrintArray(arr1, arr1Length);

	CopyDistinctNumbersFromArray(arr1, copyArr, arr1Length, arr2Length);
	cout << "\nArray 2 distinct elements: \n";
	PrintArray(copyArr, arr2Length);

	return 0;
}


