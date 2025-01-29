#pragma once
#include "Employer.h"
#include <iostream>

class Manager : public Employer {
private:
    std::string department;

public:
    Manager(const std::string& name, int age, double salary, const std::string& department)
        : Employer(name, age, salary), department(department) {}

    void Print() override {
        std::cout << "Manager Information:\n"
            << "Name: " << name << "\n"
            << "Age: " << age << "\n"
            << "Salary: $" << salary << "\n"
            << "Department: " << department << "\n\n";
    }
};