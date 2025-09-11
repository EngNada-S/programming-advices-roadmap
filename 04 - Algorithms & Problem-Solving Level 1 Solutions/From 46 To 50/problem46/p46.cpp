#include <iostream>
using namespace std;

void printFromA_Z() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << endl;;
    }
}
int main()
{
    cout << "Letters From A to Z\n";
    printFromA_Z();
}
