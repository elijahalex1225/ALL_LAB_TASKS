#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;
using namespace Shapes;

void displayMenu() {
    cout << "Shape Area Calculatorn{"<<endl;
    cout << "1. Calculate area of a square\n";
    cout << "2. Calculate area of a triangle\n";
    cout << "3. Calculate area of a circle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
}

int main() {
    int choice;
    
    do {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1: {
                Square square;
                float side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                square.setlength(side);
                cout << "Area of the square: " << Area::SquareArea(square) << endl;
                break;
            }
            case 2: {
                Triangle triangle;
                float base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                triangle.setBase(base);
                triangle.setHeight(height);
                cout << "Area of the triangle: " << Area::TriangleArea(triangle) << endl;
                break;
            }
            case 3: {
                Circle circle;
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                circle.setRadius(radius);
                cout << "Area of the circle: " << Area::CircleArea(circle) << endl;
                break;
            }
            case 4:
                cout << "Exiting program..."<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again."<<endl;
        }
    } while (choice != 4);
    
    return 0;
}