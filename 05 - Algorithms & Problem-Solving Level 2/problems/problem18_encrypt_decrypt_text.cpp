#include <iostream>
#include <string>
using namespace std;

string ReadText(string msg) {
	string text;
	cout << msg;
	getline(cin, text);
	return text;
}

string EncryptText(string text, short key) {
	string encryptedText = "";
	for (int i = 0; i < text.length(); i++) {
		encryptedText += char((int)text[i] + key);
	}
	return encryptedText;
}

string DecryptText(string text, short key) {
	string decryptedText = "";
	for (int i = 0; i < text.length(); i++) {
		decryptedText += char((int)text[i] - key);
	}
	return decryptedText;
}

int main() {
	string text = ReadText("Please enter text?\n");
	const short encryptionKey = 2;

	string textAfterEncryption = EncryptText(text, encryptionKey);
	string textAfterDecryption = DecryptText(textAfterEncryption, encryptionKey);

	cout << "\nText before Encryption: " << text << endl;
	cout << "Text after Encryption: " << textAfterEncryption << endl;
	cout << "Text after Decryption: " << textAfterDecryption << endl;

	return 0;
}