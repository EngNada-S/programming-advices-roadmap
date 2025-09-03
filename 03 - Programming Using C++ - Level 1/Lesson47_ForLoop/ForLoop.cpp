#include <iostream>
using namespace std;

void printNumsFrom1ToN(int N) {
	for (int i = 1; i <= N; i++) {
		cout << i << endl;
	}
}

void printNumsFromNTo1(int N) {
	for (int i = N; i >= 1; i--) {
		cout << i << endl;
	}
}

int SumOfOddsUntilN(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	return sum;
}

int SumOfEvensUntilN(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	return sum;
}

int FactorialOfN(int N) {
	int factorial = 1;
	for (int i = N; i >= 1; i--) {
		factorial *= i;
	}
	return factorial;
}

int PowerOfM(int num, int M) {
	int power = 1;
	for (int i = 1; i <= M; i++) {
		power *= num;
	}
	return power;
}

void PrintLettersFromAToZ() {
	for (int i = 65; i <= 90; i++) {
		cout << char(i) << endl;
	}
	for (int i = 97; i <= 122; i++) {
		cout << char(i) << endl;
	}
}

int main()
{
	printNumsFrom1ToN(10);
	cout << "-------------------------------------------------\n";
	printNumsFromNTo1(10);
	cout << "-------------------------------------------------\n";
	cout << SumOfOddsUntilN(10) << endl;
	cout << "-------------------------------------------------\n";
	cout << SumOfEvensUntilN(10) << endl;
	cout << "-------------------------------------------------\n";
	cout << FactorialOfN(6) << endl;
	cout << "-------------------------------------------------\n";
	cout << PowerOfM(2, 4) << endl;
	cout << "-------------------------------------------------\n";
	PrintLettersFromAToZ();
	return 0;
}
