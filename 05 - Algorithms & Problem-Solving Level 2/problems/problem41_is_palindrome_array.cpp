#include <iostream>
using namespace std;

void FillArray(int arr[100], int& length) {
	length = 6;

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

bool IsPalindromeArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] != arr[length - i - 1]) return false;
	}
	return true;
}

int main() {
	int arr[100];
	int arrLength = 0;

	FillArray(arr, arrLength);
	cout << "Array  Elements: \n";
	PrintArray(arr, arrLength);

	if (IsPalindromeArray(arr, arrLength)) {
		cout << "\nYes,array is palindrome.";
	}
	else {
		cout << "\nNo,array is not palindrome.";
	}

	return 0;
}

