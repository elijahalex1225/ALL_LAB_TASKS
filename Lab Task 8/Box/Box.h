#ifndef BOX_H
#define BOX_H

class Box {
public:
    Box();

    Box(const double newLength, const double newBreadth, const double newHeight);
   
    ~Box();

    double GetVolume(); 

    void setLength(double len);

    void setBreadth(double bre);

    void setHeight(double hei);

    // overload + operator to addtwo Box objects
    Box operator+(const Box& b);

private:
    double length;
    double breadth;
    double height;
};

#endif