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
        arr[i] = i + 1;
    }
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void ShuffleArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        Swap(arr[RandomNumber(0, length - 1)], arr[RandomNumber(0, length - 1)]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int length = ReadPositiveNumber("please enter number of Elements: ");

    FillArray(arr, length);
    cout << "\nArray Elements before shuffle:" << endl;
    PrintArray(arr, length);

    ShuffleArray(arr, length);
    cout << "\nArray Elements after shuffle:" << endl;
    PrintArray(arr, length);

    return 0;
}
