#include "Square.h"

namespace Shapes {

    Square::Square (){
        SideLength = 0.0;
    }
Square::Square(double length){
    SideLength = length;
}
Square::~Square() {}

void Square::setlength (double length){
    SideLength = length;
}
double Square::getlength()const {
  return  SideLength;
}

}
