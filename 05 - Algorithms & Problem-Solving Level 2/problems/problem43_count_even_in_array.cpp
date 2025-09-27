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

void FillArrayWithRandoms(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int length) {
	cout << "\nArray Elements : ";
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

int CountEvensInArray(int arr[100], int length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (CheckNumberType(arr[i]) == enNumberType::even) {
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

	cout << "\neven numbers count is : " << CountEvensInArray(arr, length);
	return 0;
}