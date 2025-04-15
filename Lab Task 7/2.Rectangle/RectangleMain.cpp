
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle REC;

    float L; 
    float  W;

          cout << "Enter the length of the rectangle: ";
          cin >> L;
    REC.setLength(L);

          cout << "Enter the width of the rectangle: ";
          cin >> W;
    REC.setWidth(W);

       cout << "The area of the rectangle is: " << REC.calculateArea() << " cm"<<endl;

    return 0;

   
  
}
