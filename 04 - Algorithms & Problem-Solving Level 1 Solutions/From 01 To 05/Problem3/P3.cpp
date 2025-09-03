//#include <iostream>
//using namespace std;
//
//int ReadNumber() {
//    int num;
//    cout << "Please Enter the number?\n";
//    cin >> num;
//    return num;
//}
//bool CheckEvenOrOdd(int num) {
//    return num % 2 == 0;
//}
//
//void PrintResults(int num) {
//    if (CheckEvenOrOdd(num)) {
//        cout << num << " is Even";
//    }
//    else {
//        cout << num << " is Odd";
//    }
//}
//
//int main()
//{
//    PrintResults(ReadNumber());
//}
#include <iostream>
using namespace std;

enum enNumberType{even=1,odd=2};

int ReadNumber() {
	int num;
	cout << "Please enter the number?\n";
	cin >> num;
	return num;
}

enNumberType CheckNumberType(int num) {
	int result = num % 2;
	if (result == 0) {
		return enNumberType::even;
	}
	else {
		return enNumberType::odd;
	}
}

void PrintNumberType(enNumberType type) {
	if (type == enNumberType::even) {
		cout << "\nNumber is Even\n";
	}
	else {
		cout << "\nNumber is Odd\n";
	}
}

int main() {
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}