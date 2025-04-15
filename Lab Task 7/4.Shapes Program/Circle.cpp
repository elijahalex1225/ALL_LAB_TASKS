#include "Circle.h"

namespace Shapes {

   Circle::Circle (){
       Radius = 0.0;
 }
Circle::Circle(double radius){
    Radius = radius;
}

Circle::~Circle() {   
}

void Circle::setRadius(double radius){
    Radius = radius;
}
double Circle::getRadius()const {
  return Radius;
}

}
