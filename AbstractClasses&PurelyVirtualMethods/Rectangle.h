#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() override {
        return width * height;
    }
};