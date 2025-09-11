#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string msg) {
    float num;
    cout << msg<<endl;
    cin >> num;
    return num;
}
float SumUntillNgative99() {
    int sum = 0, num = 0, counter = 1;
    do {
        num = ReadNumber("please enter number "+to_string(counter));
        if (num == -99) break;
        sum += num;
        counter++;
    } while (num != -99);
    return sum;
}

int main()
{
    cout << "\nResult : "<< SumUntillNgative99() <<endl;
}
