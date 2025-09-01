// q1
//------------
/*
	 valid
	 invalid => special character (-)
	 valid
	 valid
	 invalid => starts with a number
	 valid
	 invalid => whitespce
	 valid
	 invalid => startts with special character (#)
	 invalid => starts with special character (@)
	 invalid => contains special character (@)
	 invalid => reserved keyword
	 invalid => reserved keyword
*/
#include <iostream>
using namespace std;
int main() {
	//APP1
	string name = "Mohamed Abo-Hadhoud";
	int age = 44;
	string city = "Amman";
	string country = "Jordan";
	float MonthlySalary = 5000;
	char gender = 'M';
	bool married = true;
	cout << "********************" << endl;
	cout << "Name :" << name << endl;
	cout << "Age :" << age << " years" << endl;
	cout << "City :" << city << endl;
	cout << "Country :" << country << endl;
	cout << "MonthlySalary :" << MonthlySalary << endl;
	cout << "YearlySalary :" << MonthlySalary * 12 << endl;
	cout << "Gender :" << gender << endl;
	cout << "Married :" << married << endl;
	cout << "********************" << endl;
	cout << "_________________________________________________\n";
	//APP2
	int num1 = 20;
	int num2 = 30;
	int num3 = 10;
	cout << num1 << " +\n";
	cout << num2 << " +\n";
	cout << num3 << endl;
	cout << "------------------------\n";
	cout << "Total = " << num1 + num2 + num3 << endl;
	cout << "_________________________________________________\n";
	//APP3
	int Age = 25;
	cout << "After five years you will be " << Age + 5 << " years old\n";
	return 0;
}
