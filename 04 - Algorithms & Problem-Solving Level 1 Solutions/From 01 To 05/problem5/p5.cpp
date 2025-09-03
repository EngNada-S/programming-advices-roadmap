#include <iostream>
using namespace std;

struct stPersonData {
    short age;
    bool HasDrivenLicense;
    bool HasRecommendation;
};
stPersonData ReadData() {
    stPersonData data;
    cout << "Please enter your age?\n";
    cin >> data.age;
    cout << "Have you a driven license?\n";
    cin >> data.HasDrivenLicense;
    cout << "Have you a recommendation?\n";
    cin >> data.HasRecommendation;
    return data;
}
bool CheckPersonData(stPersonData data) {
    return data.HasRecommendation || (data.age >= 21 && data.HasDrivenLicense);
}
void PrintResults(stPersonData data) {
    if (CheckPersonData(data)) {
        cout << "\n you are Heired\n";
    }
    else {
        cout << "\n you are Rejected\n";
    }
}
int main()
{
    PrintResults(ReadData());
}

