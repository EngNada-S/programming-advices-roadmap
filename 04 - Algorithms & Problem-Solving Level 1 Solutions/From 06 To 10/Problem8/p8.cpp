#include <iostream>
using namespace std;

int ReadMark() {
    int mark;
    cout << "please enter your Mark? ";
    cin >> mark;
    return mark;
}
bool CheckMark(int mark) {
    return mark >= 50;
}
void PrintResults(int mark) {
    if (CheckMark(mark)) {
        cout << "\n Pass\n";
    }
    else {
        cout << "\n Fail\n";
    }
}

int main()
{
    PrintResults(ReadMark());
    return 0;
}
