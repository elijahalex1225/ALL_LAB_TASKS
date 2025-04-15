#include <iostream>
#include "Rectangle.h"

Rectangle:: Rectangle(float L , float W) {
    length = L;
    width  = W;
}

Rectangle::~Rectangle() {

}


void Rectangle::setLength(float y){
        length= y;
}
void Rectangle:: setwidth(float x){
       width = x;

}

float Rectangle::getLength()const {
    return length;
}

float Rectangle::getwidth()const  {
    return width;
}

float Rectangle::calculateArea()const {
    return length * width;

   
}




