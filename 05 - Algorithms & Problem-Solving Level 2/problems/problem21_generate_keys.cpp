#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enCharType {
	SamallLetter = 1,
	CapitalLetter = 2,
	SpecialCharacter = 3,
	Digit = 4
};

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

char GetRandomChar(enCharType type) {
	switch (type) {
	case enCharType::SamallLetter:
		return char(RandomNumber(97, 122));
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enCharType::SpecialCharacter:
		return char(RandomNumber(33, 47));
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
	}
}

string GenerateWord(enCharType type, int wordLength) {
	string word = "";
	for (short i = 0; i < wordLength; i++) {
		word += GetRandomChar(type);
	}
	return word;
}

string GenerateKey() {
	string key = GenerateWord(enCharType::CapitalLetter, 4) + "-" +
		GenerateWord(enCharType::CapitalLetter, 4) + "-" +
		GenerateWord(enCharType::CapitalLetter, 4) + "-" +
		GenerateWord(enCharType::CapitalLetter, 4);
	return key;
}

void PrintKeys(int num) {
	cout << endl;
	for (short i = 1; i <= num; i++) {
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));

	PrintKeys(ReadPositiveNumber("please enter number of keys: "));

	return 0;
}