#include <iostream>
using namespace std;

int x = 30;

void FunctionScope() {
    int x = 10;
    cout << "variable from proctural: " << x << endl;
}
int main()
{
    int x = 20;
    cout << "variable from main: " << x << endl;
    FunctionScope();
    ::x++;
    cout << "variable from global: " << ::x << endl;
}
