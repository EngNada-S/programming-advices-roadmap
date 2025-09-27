#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrimeOrNot { prime = 1, notPrime = 2 };

enPrimeOrNot isPrime(int num) {
	int M = round(num / 2);
	for (int i = 2; i <= M; i++) {
		if (num % i == 0) {
			return enPrimeOrNot::notPrime;
		}
	}
	return enPrimeOrNot::prime;
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

void CopyPrimesFromArray(int arr1[100], int copyArr[100], int length1, int& length2) {
	for (int i = 0; i < length1; i++) {
		if (isPrime(arr1[i]) == enPrimeOrNot::prime) {
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

	CopyPrimesFromArray(arr1, copyArr, arr1Length, arr2Length);
	cout << "\nArray 2 prime Numbers: \n";
	PrintArray(copyArr, arr2Length);

	return 0;
}


