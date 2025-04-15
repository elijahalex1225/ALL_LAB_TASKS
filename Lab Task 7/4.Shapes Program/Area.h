#ifndef AREA_H
#define AREA_H

namespace Shapes {
    class Square; 
    class Triangle;  
    class Circle;  
}
 
 using namespace Shapes;

       class Area {
public:
    
    static double SquareArea(const Square& square);
    
    
    static double TriangleArea(const Triangle& triangle);
    
  
    static double CircleArea(const Circle& circle);
};

#endif
