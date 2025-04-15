#ifndef SQUARE_H
#define SQUARE_H


namespace Shapes{

class Square {

private:
     double SideLength ;

public:

Square();
Square(double length);
~Square();

void setlength(double length);
double getlength()const;


};

}
#endif 
