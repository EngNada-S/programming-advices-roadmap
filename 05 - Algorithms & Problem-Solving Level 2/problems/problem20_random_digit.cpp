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

int main() {
	srand((unsigned)time(NULL));

	cout << "Small Letter : " << GetRandomChar(enCharType::SamallLetter) << endl;
	cout << "Capital Letter : " << GetRandomChar(enCharType::CapitalLetter) << endl;
	cout << "Special Character : " << GetRandomChar(enCharType::SpecialCharacter) << endl;
	cout << "Digit : " << GetRandomChar(enCharType::Digit) << endl;


	return 0;
}