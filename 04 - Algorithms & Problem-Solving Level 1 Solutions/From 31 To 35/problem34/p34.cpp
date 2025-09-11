#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg) {
    int num;
    do {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);
    return num;
}

float CalculatePercentage(int sales) {
    float percentage;
    if (sales >= 1e6) {
        percentage = 0.01;
    }
    else if (sales >= 5e5) {
        percentage = 0.02;
    }
    else if (sales >= 1e5) {
        percentage = 0.03;
    }
    else if (sales >= 5e4) {
        percentage = 0.05;
    }
    else {
        percentage = 0;
    }
    return percentage;
}

float CalculateCommission(int sales) {
    return sales * CalculatePercentage(sales);
}
int main()
{
    int sales = ReadPositiveNumber("please enter total sales?");
    cout << "\nPercentage: " << CalculatePercentage(sales) << endl;
    cout << "Your Commision : " << CalculateCommission(sales) << endl;
    return 0;
}