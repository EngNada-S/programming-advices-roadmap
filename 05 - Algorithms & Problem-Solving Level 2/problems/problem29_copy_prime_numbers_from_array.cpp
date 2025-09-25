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

void CopyOnlyPrimaryNumbers(int arr1[100], int arr2[100], int length, int& arr2Length) {
	short index = 0;
	for (int i = 0; i < length; i++) {
		if (isPrime(arr1[i]) == enPrimeOrNot::prime) {
			arr2[index] = arr1[i];
			index++;
		}
	}
	arr2Length = --index;
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100], primeArr[100];
	int length = ReadPositiveNumber("please enter length of array: "), primeLength=0;

	FillArrayWithRandoms(arr, length);
	cout << "\nArray 1 Elements: \n";
	PrintArray(arr, length);

	CopyOnlyPrimaryNumbers(arr, primeArr, length, primeLength);
	cout << "\nPrime Numbers in Array2: \n";
	PrintArray(primeArr, primeLength);

	return 0;
}