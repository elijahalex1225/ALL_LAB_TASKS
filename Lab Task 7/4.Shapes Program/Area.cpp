#include "area.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include <cmath>

double Area::SquareArea(const Shapes::Square& square) {
    double side = square.getlength(); 
    return side * side;
}

double Area::TriangleArea(const Shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::CircleArea(const Shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}