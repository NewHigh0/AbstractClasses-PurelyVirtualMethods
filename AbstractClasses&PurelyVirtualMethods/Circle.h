#pragma once
#include "Shape.h"

class Circle : public Shape {
private:
    int x, y;
    double radius;

public:
    Circle(int x = 0, int y = 0, double r = 0) : x(x), y(y), radius(r) {}

    void Show() const override {
        std::cout << "Circle: center (" << x << "," << y
            << "), radius " << radius << std::endl;
    }

    void Save(std::ofstream& file) const override {
        file << "Circle\n";
        file << x << " " << y << " " << radius << "\n";
    }

    void Load(std::ifstream& file) override {
        file >> x >> y >> radius;
    }
};