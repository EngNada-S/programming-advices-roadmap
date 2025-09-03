#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num=0;
    for (int i = 1; i <= 5; i++) {
        cout << "enter number " << i << " : ";
        cin >> num;
        if (num > 50) {
            continue;
        }
        sum += num;
    }
    cout << "\nthe sum is " << sum << endl;
}
