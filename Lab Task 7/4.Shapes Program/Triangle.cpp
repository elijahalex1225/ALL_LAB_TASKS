#include "Triangle.h"

namespace Shapes {

    Triangle::Triangle() {
        Base = 0;
        Height = 0;
    }

    Triangle::Triangle(double b, double h) {
        Base = b;
        Height = h;
    }

    Triangle::~Triangle() {}

    void Triangle::setBase(double b) {
        Base = b;
    }

    double Triangle::getBase() const {
        return Base;
    }

    void Triangle::setHeight(double h) {
        Height = h;
    }

    double Triangle::getHeight() const {
        return Height;
    }
}