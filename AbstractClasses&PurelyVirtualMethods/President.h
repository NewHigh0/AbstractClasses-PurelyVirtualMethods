#pragma once
#include "Employer.h"
#include <iostream>

class President : public Employer {
private:
    std::string companyName;

public:
    President(const std::string& name, int age, double salary, const std::string& companyName)
        : Employer(name, age, salary), companyName(companyName) {}

    void Print() override {
        std::cout << "President Information:\n"
            << "Name: " << name << "\n"
            << "Age: " << age << "\n"
            << "Salary: $" << salary << "\n"
            << "Company: " << companyName << "\n\n";
    }
};