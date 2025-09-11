#include <iostream>
using namespace std;

int ReadNumber() {
    int N;
    cout << "please enter value of N?\n";
    cin >> N;
    return N;
}
void PrintFromNTo1UingFor(int N) {
    cout << "\nNumbers using for:" << endl;
    for (int i = N; i >=1; i--) {
        cout << i << endl;
    }
}
void PrintFromNTo1UingWhile(int N) {
    cout << "\nNumbers using while:" << endl;
    int i = N+1;
    while (i >1) {
        i--;
        cout << i << endl;
    }
}
void PrintFromNTo1UingDoWhile(int N) {
    cout << "\nNumbers using do while:" << endl;
    int i = N+1;
    do {
        i--;
        cout << i << endl;
    } while (i >1);
}
int main()
{
    int N = ReadNumber();
    PrintFromNTo1UingFor(N);
    PrintFromNTo1UingWhile(N);
    PrintFromNTo1UingDoWhile(N);
}
