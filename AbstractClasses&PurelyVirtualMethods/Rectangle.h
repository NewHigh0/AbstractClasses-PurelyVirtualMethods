#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    int x, y;
    double width, height;

public:
    Rectangle(int x = 0, int y = 0, double w = 0, double h = 0)
        : x(x), y(y), width(w), height(h) {}

    void Show() const override {
        std::cout << "Rectangle: top-left corner (" << x << "," << y
            << "), width " << width << ", height " << height << std::endl;
    }

    void Save(std::ofstream& file) const override {
        file << "Rectangle\n";
        file << x << " " << y << " " << width << " " << height << "\n";
    }

    void Load(std::ifstream& file) override {
        file >> x >> y >> width >> height;
    }
};