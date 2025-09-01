#include <iostream>
using namespace std;

int main() {
	//APP1
	string name, city, country;
	short int age;
	float MonthlySalary;
	unsigned char gender;
	bool ismarried;
	cout << "enter your name?" << endl;
	cin >> name; // first name only
	cout << "enter your age?" << endl;
	cin >> age;
	cout << "enter your city?" << endl;
	cin >> city;
	cout << "enter your country?" << endl;
	cin >> country;
	cout << "enter your MonthlySalary?" << endl;
	cin >> MonthlySalary;
	cout << "enter your gender?" << endl;
	cin >> gender;
	cout << "are you married?" << endl;
	cin >> ismarried;
	cout << "\n********************" << endl;
	cout << "Name :" << name << endl;
	cout << "Age :" << age << " years" << endl;
	cout << "City :" << city << endl;
	cout << "Country :" << country << endl;
	cout << "MonthlySalary :" << MonthlySalary << endl;
	cout << "YearlySalary :" << MonthlySalary * 12 << endl;
	cout << "Gender :" << gender << endl;
	cout << "Married :" << ismarried << endl;
	cout << "********************" << endl;
	cout << "\n_______________________________________________\n";

	//APP2
	int num1, num2, num3;
	cout << "enter first number?\n";
	cin >> num1;
	cout << "enter second number?\n";
	cin >> num2;
	cout << "enter last number?\n";
	cin >> num3;
	cout << endl << num1 << "+\n";
	cout << num2 << "+\n";
	cout << num3 << endl;
	cout << "------------------------\n";
	cout << "Total = " << num1 + num2 + num3 << endl;
	cout << "\n_______________________________________________\n";

	//APP3
	short int Age;
	cout << "enter your age?\n";
	cin >> Age;
	cout << "After five years you will be " << Age + 5 << " years old\n";
	return 0;
}