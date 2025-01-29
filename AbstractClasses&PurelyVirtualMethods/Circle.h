#pragma once
#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
    const double PI = 3.14159265359;

public:
    Circle(double r) : radius(r) {}

    double getArea() override {
        return PI * radius * radius;
    }
};