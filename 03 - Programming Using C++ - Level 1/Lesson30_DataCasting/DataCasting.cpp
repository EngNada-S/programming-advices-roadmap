#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	// 1
	string str1 = "43.22";
	cout << stoi(str1) << endl;
	cout << stof(str1) << endl;
	cout << stod(str1) << endl;
	cout << "----------------------------------------------\n";
	//2
	int N1 = 20;
	cout << to_string(N1) << endl;
	cout << "----------------------------------------------\n";
	//3
	double N2 = 33.5;
	cout << to_string(N2) << endl;
	cout << "----------------------------------------------\n";
	//4
	float N3 = 55.23;
	cout << to_string(N3) << endl;
	cout << "----------------------------------------------\n";
	return 0;
}