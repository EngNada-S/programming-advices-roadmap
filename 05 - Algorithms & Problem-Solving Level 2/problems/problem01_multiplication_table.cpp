#include <iostream>
using namespace std;

void TableHead() {
    cout << "\t\t\tMultiplication Table from 1 to 10" << "\n\n";
    for (short i = 1; i <= 10; i++) {
        cout << "\t" << i;
    }
    cout << endl << "___________________________________________________________________________________" << endl;
}

string seperator(short i) {
    if (i < 10) {
        return "   | ";
    }
    return "  | ";
}

void TableBody() {
    for (short i = 1; i <= 10; i++) {
        cout <<" " << i << seperator(i);
        for (short j = 1; j <= 10; j++) {
            cout << "\t" << i * j;
        }
        cout << endl;
    }
}

void MultiplicationTable() {
    TableHead();
    TableBody();
}

int main() {
    MultiplicationTable();
    return 0;
}
