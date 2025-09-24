#include <iostream>
using namespace std;

string ReadPassword(string msg) {
	string pass;
	cout << msg;
	cin >> pass;
	return pass;
}

int FindThePassword(string pass) {
	string word = "";
	int count = 0;

	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				word += char(i);
				word += char(j);
				word += char(k);
				count++;
				cout << "Trial [" << count << "] : " << word << endl;
				if (pass == word) return count;
				word = "";
			}
		}

	}
}
int main() {
	string pass = ReadPassword("Please enter a 3-Letter Password (all capital)?\n");
	int count = FindThePassword(pass);

	cout << "pass is  " << pass << endl;
	cout << "found after " << count << " trials" << endl;
	return 0;
}