#include <iostream>
using namespace std;

int main()
{

    //36
    /*int num1, num2;
    char operationType;
    cout << "enter first number?\n";
    cin >> num1;
    cout << "enter second number?\n";
    cin >> num2;
    cout << "enter operation type?\n";
    cin >> operationType;
    switch (operationType) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "wrong operation\n";
    }*/

    //p44
    /*int day;
    cout << "enter the day?\n";
    cin >> day;
    switch (day) {
        case 1:
            cout << "It's Saterday";
            break;
        case 2:
            cout << "It's Sunday";
            break;
        case 3:
            cout << "It's Monday";
            break;
        case 4:
            cout << "It's Tuesday";
            break;
        case 5:
            cout << "It's Wednesday";
            break;
        case 6:
            cout << "It's Thursday";
            break;
        case 7:
            cout << "It's Friday";
            break;
        default:
            cout << "Wrong Day";
    }*/


    //45
    int MonthOfYear;
    cout << "Enter the month number (1-12): ";
    cin >> MonthOfYear;

    switch (MonthOfYear) {
    case 1: cout << "It's January"; break;
    case 2: cout << "It's February"; break;
    case 3: cout << "It's March"; break;
    case 4: cout << "It's April"; break;
    case 5: cout << "It's May"; break;
    case 6: cout << "It's June"; break;
    case 7: cout << "It's July"; break;
    case 8: cout << "It's August"; break;
    case 9: cout << "It's September"; break;
    case 10: cout << "It's October"; break;
    case 11: cout << "It's November"; break;
    case 12: cout << "It's December"; break;
    default: cout << "Wrong month! Please enter a number between 1 and 12.";
    }

}