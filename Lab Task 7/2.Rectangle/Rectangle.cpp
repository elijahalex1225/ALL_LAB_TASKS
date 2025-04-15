#include <iostream>
#include "Rectangle.h"

Rectangle:: Rectangle (){
    length = 0.0;
    width  = 0.0;
}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float x ){    
    length = x;
}

void Rectangle::setWidth(float y ){
    width = y;
}


float Rectangle::getLength()const {
    return length;
}

float Rectangle::getWidth()const  {
    return width;
}

float Rectangle::calculateArea()const {
    return length * width;

   
}




