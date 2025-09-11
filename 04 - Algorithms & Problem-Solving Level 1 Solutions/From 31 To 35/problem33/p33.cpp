#include <iostream>
using namespace std;

int ReadPositiveNumber(int from,int to) {
    int num;
    do {
        cout << "please enter your mark?" << endl;
        cin >> num;
    } while (num<from|| num>to);
    return num;
}

char GradeAccordingToMark(int mark) {
    if (mark >= 90) {
        return 'A';
    }
    else if (mark >= 80) {
        return 'B';
    }
    else if (mark >= 70) {
        return 'C';
    }
    else if (mark >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}
int main()
{
    cout << "Your Grade : " << GradeAccordingToMark(ReadPositiveNumber(0,100)) << endl;
    return 0;
}
