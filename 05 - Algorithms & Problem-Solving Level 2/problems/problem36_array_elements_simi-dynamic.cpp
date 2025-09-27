#include <iostream>
using namespace std;

int ReadNumber() {
	int num;
	cout << "please enter a number: ";
	cin >> num;
	return num;
}

void AddArrayElement(int num, int arr[100], int& length) {
	length++;
	arr[length - 1] = num;
}

void FillArraySimiDynamic(int arr[100], int& length) {
	bool again = true;
	do {
		AddArrayElement(ReadNumber(), arr, length);

		cout << "do you want to add more numbers?[0]No [1]Yes? ";
		cin >> again;

	} while (again);
}

void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[100], length = 0;
	FillArraySimiDynamic(arr, length);

	cout << "\nArray Length: " << length << endl;
	cout << "Array Elements: ";
	PrintArray(arr, length);
	return 0;
}
