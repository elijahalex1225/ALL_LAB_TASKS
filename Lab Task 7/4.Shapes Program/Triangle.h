#ifndef TRIANGLE_H
#define TRIANGL_H


namespace Shapes {

class Triangle {
private:
   double Base;
   double Height;

public:
Triangle();
Triangle(double b, double h);
~Triangle();

void setBase(double b);
double getBase()const;



void setHeight(double h);
double getHeight()const;


   };

}

#endif
