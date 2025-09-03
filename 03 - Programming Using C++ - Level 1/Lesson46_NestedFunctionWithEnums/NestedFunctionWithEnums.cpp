#include <iostream>
using namespace std;

enum enScreeenColor { red = 1, green = 2, blue = 3, yellow = 4 };
void ChooseColorFromMenu() {
    cout << "*********************************\n";
    cout << "Choose The Color Number?\n";
    cout << "(1) Red\n";
    cout << "(2) Green\n";
    cout << "(3) Blue\n";
    cout << "(4) Yellow\n";
    cout << "*********************************\n";
    cout << "The Color Number : ";
}
enScreeenColor ReadColor() {
    int colornum;
    cin >> colornum;
    return enScreeenColor(colornum);
}
void ChangeScreenColor(enScreeenColor color) {
    switch (color) {
    case enScreeenColor::red:
        system("color 4F");
        break;
    case enScreeenColor::green:
        system("color 2F");
        break;
    case enScreeenColor::blue:
        system("color 1F");
        break;
    case enScreeenColor::yellow:
        system("color 6F");
        break;
    default:
        system("color 0F");
    }
}
int main()
{
    ChooseColorFromMenu();
    ChangeScreenColor(ReadColor());
}
