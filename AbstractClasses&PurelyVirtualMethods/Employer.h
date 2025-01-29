#pragma once
#include <string>

class Employer {
protected:
    std::string name;
    int age;
    double salary;

public:
    Employer(const std::string& name, int age, double salary)
        : name(name), age(age), salary(salary) {}

    virtual void Print() = 0;
    virtual ~Employer() {}
};