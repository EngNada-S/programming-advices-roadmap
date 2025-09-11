#include <iostream>
using namespace std;

int ReadNumber() {
    int N;
    cout << "please enter value of N?\n";
    cin >> N;
    return N;
}
void PrintFrom1ToNUingFor(int N) {
    cout << "\nNumbers From 1 To " << N << " using for:" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << endl;
    }
}
void PrintFrom1ToNUingWhile(int N) {
    cout << "\nNumbers From 1 To " << N << " using while:" << endl;
    int i = 0;
    while (i < N) {
        i++;
        cout << i << endl;
    }
}
void PrintFrom1ToNUingDoWhile(int N) {
    cout << "\nNumbers From 1 To " << N << " using do while:" << endl;
    int i = 0;
    do {
        i++;
        cout << i << endl;
    } while (i < N);
}
int main()
{
    int N = ReadNumber();
    PrintFrom1ToNUingFor(N);
    PrintFrom1ToNUingWhile(N);
    PrintFrom1ToNUingDoWhile(N);
}
