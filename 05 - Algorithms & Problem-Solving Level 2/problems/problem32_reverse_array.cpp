#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string msg) {
    int num;
    do {
        cout << msg;
        cin >> num;
    } while (num <= 0);
    return num;
}

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ReverseArray(int arr1[100], int arr2[100], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[length - i - 1];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], destArr[100];
    int length = ReadPositiveNumber("please enter number of Elements: ");

    FillArray(arr, length);
    cout << "\nArray 1 Elements" << endl;
    PrintArray(arr, length);

    ReverseArray(arr, destArr, length);
    cout << "\nArray 2 Elements after reverse array:" << endl;
    PrintArray(destArr, length);

    return 0;
}
