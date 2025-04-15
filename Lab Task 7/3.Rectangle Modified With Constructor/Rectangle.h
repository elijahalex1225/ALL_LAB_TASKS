// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length ;
    float width ;

public:
    Rectangle(float length =0.0 , float width =0.0) ; 
   ~ Rectangle() ; 

void setLength(float l);
   void setwidth(float w);
  
    float getLength()const ;
    float getwidth() const;

    
    float calculateArea() const;
};

#endif