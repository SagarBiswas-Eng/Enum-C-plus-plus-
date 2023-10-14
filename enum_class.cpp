#include <iostream>
using namespace std;

enum Color {
    Red,
    Green,
    Blue
};

int main() {
    Color myColor = Green;

    switch (myColor) {
        case Red:
            cout << "The color is Red." << endl;
            break;
        case Green:
            cout << "The color is Green." << endl;
            break;
        case Blue:
            cout << "The color is Blue." << endl;
            break;
        default:
            cout << "Unknown color." << endl;
    }

    return 0;
}

