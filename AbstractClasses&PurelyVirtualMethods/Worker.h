#pragma once
#include "Employer.h"
#include <iostream>

class Worker : public Employer {
private:
    std::string position;

public:
    Worker(const std::string& name, int age, double salary, const std::string& position)
        : Employer(name, age, salary), position(position) {}

    void Print() override {
        std::cout << "Worker Information:\n"
            << "Name: " << name << "\n"
            << "Age: " << age << "\n"
            << "Salary: $" << salary << "\n"
            << "Position: " << position << "\n\n";
    }
};