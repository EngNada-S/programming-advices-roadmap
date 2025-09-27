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
		arr[i] = RandomNumber(-100, 100);
	}
}

void PrintArray(int arr[100], int length) {
	cout << "\nArray Elements : ";
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

int CountPositiveInArray(int arr[100], int length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] >= 0) {
			count++;
		}
	}
	return count;
}


int main() {
	srand((unsigned)time(NULL));

	int arr[100];
	int length = ReadPositiveNumber("please enter length of array: ");

	FillArrayWithRandoms(arr, length);
	PrintArray(arr, length);

	cout << "\npositive numbers count is : " << CountPositiveInArray(arr, length);
	return 0;
}