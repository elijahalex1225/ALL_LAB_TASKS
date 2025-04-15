#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float w, l;

    cout << "Enter Length in cm: ";
    cin >> l;

    cout << "Enter Width in cm : ";
    cin >> w;

    Rectangle Rec;


    Rec.setLength(l);
    Rec.setwidth(w);

    cout << "The area of the rectangle is: " << Rec.calculateArea() << " cm.cm" << endl;

    return 0;
}
