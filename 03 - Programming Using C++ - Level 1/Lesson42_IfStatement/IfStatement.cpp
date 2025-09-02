#include <iostream>
using namespace std;

int main()
{
    //p4
    /*int age;
    bool hasLicense;
    cout << "enter your age>\n";
    cin >> age;
    cout << "have you Driver license?\n";
    cin >> hasLicense;
    if (age >= 21 && hasLicense == true) {
        cout << "Hired\n";
    }
    else {
        cout << "Rejected";
    }*/

    //p8
    /*int mark;
    cout << "enter your Mark>\n";
    cin >> mark;
    if (mark >= 50) {
        cout << "Pass\n";
    }
    else {
        cout << "Fail";
    }*/

    //p11
    /*float mark1,mark2,mark3;
    cout << "enter your Mark1>\n";
    cin >> mark1;
    cout << "enter your Mark2>\n";
    cin >> mark2;
    cout << "enter your Mark3>\n";
    cin >> mark3;
    float average = (mark1 + mark2 + mark3) / 3;
    if (average >= 50) {
        cout << average << endl;
        cout << "Pass\n";
    }
    else {
        cout << average << endl;
        cout << "Fail";
    }*/

    //p24
    /*int age;
    cout << "enter your age>\n";
    cin >> age;
    if (age >= 18 && age <=45) {
        cout << "Valid Age\n";
    }
    else {
        cout << "Invalid Age";
    }*/

    //p49
    /*int PINCode;
    cout << "enter your age>\n";
    cin >> PINCode ;
    if (PINCode == 1234) {
        int balance = 7500;
        cout << "Your Balance is: " << balance;
    }
    else {
        cout << "Wrong PIN";
    }*/

    //33
    /*int grade;
    cout << "enter your grade>\n";
    cin >> grade;
    if ( grade >= 90) {
        cout << "A\n";
    }
    else if (grade >= 80) {
        cout << "B\n";
    }
    else if (grade >= 70) {
        cout << "C\n";
    }
    else if (grade >= 60) {
        cout << "D\n";
    }
    else if (grade >= 50) {
        cout << "E\n";
    }
    else {
        cout << "F\n";
    }*/

    //34
    /*int totalsales;
    cout << "enter your totalsales>\n";
    cin >> totalsales;
    float percentage;
    if (totalsales >= 1000000) {
        percentage = 0.01;
    }
    else if (totalsales >= 500000) {
        percentage = 0.02;
    }
    else if (totalsales >= 100000) {
        percentage = 0.03;
    }
    else if (totalsales >= 50000) {
        percentage = 0.05;
    }
    else {
        percentage = 0;
    }
    float commission = percentage * totalsales;
    cout << commission << endl;*/

    //36
    /*int num1, num2;
    string operationType;
    cout << "enter first number?\n";
    cin >> num1;
    cout << "enter second number?\n";
    cin >> num2;
    cout << "enter operation type?\n";
    cin >> operationType;
    if (operationType == "+") {
        cout << num1 + num2 << endl;
    }
    else if (operationType == "-") {
        cout << num1 - num2 << endl;
    }
    else if (operationType == "*") {
        cout << num1 * num2 << endl;
    }
    else if (operationType == "/") {
        cout << num1 / num2 << endl;
    }
    else {
        cout << "wrong operation\n";
    }*/

    //p44
    /*int day;
    cout << "enter the day?\n";
    cin >> day;
    if (day > 7) {
        cout << "wrong day";
    }
    else {
        if (day == 1) {
            cout << "It's Sunday";
        }
        else if (day == 2) {
            cout << "It's Monday";
        }
        else if (day == 3) {
            cout << "It's Tuesday";
        }
        else if (day == 4) {
            cout << "It's Wednesday";
        }
        else if (day == 5) {
            cout << "It's Thursday";
        }
        else if (day == 6) {
            cout << "It's Friday";
        }
        else {
            cout << "It's Saterday";
        }
    }*/

    //45
    int MonthOfYear;
    cout << "enter the MonthOfYear?\n";
    cin >> MonthOfYear;
    if (MonthOfYear > 12 || MonthOfYear<1) {
        cout << "wrong month";
    }
    else {
        if (MonthOfYear == 1) {
            cout << "It's January";
        }
        else if (MonthOfYear == 2) {
            cout << "It's February";
        }
        else if (MonthOfYear == 3) {
            cout << "It's March";
        }
        else if (MonthOfYear == 4) {
            cout << "It's April";
        }
        else if (MonthOfYear == 5) {
            cout << "It's May";
        }
        else if (MonthOfYear == 6) {
            cout << "It's June";
        }
        else if (MonthOfYear == 7) {
            cout << "It's July";
        }
        else if (MonthOfYear == 8) {
            cout << "It's August";
        }
        else if (MonthOfYear == 9) {
            cout << "It's September";
        }
        else if (MonthOfYear == 10) {
            cout << "It's October";
        }
        else if (MonthOfYear == 11) {
            cout << "It's November";
        }
        else {
            cout << "It's December";
        }
    }
    return 0;
}