#pragma once
#include <fstream>
#include <iostream>

class Shape {
public:
    virtual void Show() const = 0;
    virtual void Save(std::ofstream& file) const = 0;
    virtual void Load(std::ifstream& file) = 0;
    virtual ~Shape() {}
};