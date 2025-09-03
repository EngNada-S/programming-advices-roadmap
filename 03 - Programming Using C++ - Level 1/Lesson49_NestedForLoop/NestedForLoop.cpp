#include <iostream>
using namespace std;

int main()
{
    // exp1
    /*for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            cout << char(i)<<char(j) << endl;
        }
    }*/

    // exp2
    /*for (int i = 10; i >=1; i--) {
        for (int j = 1; j <=i; j++) {
            cout << "*";
        }
        cout << endl;
    }*/

    // exp3
    /*for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <=i; j++) {
            cout << j<<" ";
        }
        cout << endl;
    }*/

    // exp4
    /*for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }*/

    //exp5
    /*for (int i = 65; i <= 70; i++) {
        for (int j = 65; j <= i; j++) {
            cout << char(j) << " ";
        }
        cout << endl;
    }*/

    //exp6
    for (int i = 1; i <= 10; i++) {
        for (int j = i; j <= 10; j++) {
            cout << j<<" ";
        }
        cout << endl;
    }
}
