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
	return rand() % (to - from + 1) + from;
}

void FillArray(int arr[100], int length) {
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

int FindNumberInArray(int arr[100], int length, int num) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num) return i;
	}
	return -1;
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100];
	int length = ReadPositiveNumber("please enter number of Elements: ");

	FillArray(arr, length);
	cout << "\nArray 1 Elements" << endl;
	PrintArray(arr, length);

	int numToFind = ReadPositiveNumber("\nplease enter the number you want to found? \n");

	int position = FindNumberInArray(arr, length, numToFind);

	cout << endl;
	cout << "number you are looking for is: " << numToFind << endl;
	if (position != -1) {
		cout << "the number found at position : " << position << endl;
		cout << "the number found its order : " << position + 1 << endl;
	}
	else {
		cout << "the number is not found :(";
	}
	return 0;
}