#ifndef CIRCLE_H
#define CIRCLE_H

namespace Shapes  {
    
class Circle {

    private:
        double Radius ;
    
    public:
    
    Circle();
   Circle(double radius);
    ~Circle();
    
    void setRadius(double radius);
   double getRadius()const;
    
    
    };
    
}

#endif 