#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "please enter the first number A?\n";
	cin >> A;
	cout << "please enter the second number B?\n";
	cin >> B;
	cout << "------------------------------------\n";
	cout << A << " == " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B) << endl;
	return 0;
}
