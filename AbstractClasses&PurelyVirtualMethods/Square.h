#pragma once
#include "Shape.h"

class Square : public Shape {
private:
    int x, y;
    double side;

public:
    Square(int x = 0, int y = 0, double side = 0) : x(x), y(y), side(side) {}

    void Show() const override {
        std::cout << "Square: top-left corner (" << x << "," << y
            << "), side length " << side << std::endl;
    }

    void Save(std::ofstream& file) const override {
        file << "Square\n";
        file << x << " " << y << " " << side << "\n";
    }

    void Load(std::ifstream& file) override {
        file >> x >> y >> side;
    }
};