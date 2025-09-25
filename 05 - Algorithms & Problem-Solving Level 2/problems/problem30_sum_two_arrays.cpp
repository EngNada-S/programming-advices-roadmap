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
	cout << endl;
}

void Sum2Arrays(int arr1[100], int arr2[100], int sumArr[100], int length) {
	for (int i = 0; i < length; i++) {
		sumArr[i] = arr1[i] + arr2[i];
	}
}
int main() {
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], sumArr[100];
	int length = ReadPositiveNumber("please enter length of array: ");;

	FillArrayWithRandoms(arr1, length);
	cout << "\nArray 1 Elements: \n";
	PrintArray(arr1, length);

	FillArrayWithRandoms(arr2, length);
	cout << "\nArray 2 Elements: \n";
	PrintArray(arr2, length);

	Sum2Arrays(arr1, arr2, sumArr, length);
	cout << "\nSum Array1 & Array2 Elements: \n";
	PrintArray(sumArr, length);

	return 0;
}