#include <iostream>
using namespace std;

enum enScreeenColor { red = 1, green = 2, blue = 3, yellow = 4 };

int main()
{
    cout << "*********************************\n";
    cout << "Choose The Color Number?\n";
    cout << "(1) Red\n";
    cout << "(2) Green\n";
    cout << "(3) Blue\n";
    cout << "(4) Yellow\n";
    cout << "*********************************\n";

    cout << "The Color Number : ";

    int colornum;
    cin >> colornum;

    enScreeenColor color;
    color = enScreeenColor(colornum);
    if (color == enScreeenColor::red) {
        system("color 4F");
    }
    else if (color == enScreeenColor::green) {
        system("color 2F");
    }
    else if (color == enScreeenColor::blue) {
        system("color 1F");
    }
    else if (color == enScreeenColor::yellow) {
        system("color 6F");
    }
    else {
        system("color 0F");
    }
}
