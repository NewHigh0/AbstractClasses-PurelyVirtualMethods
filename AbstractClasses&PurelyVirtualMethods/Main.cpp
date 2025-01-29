#include "President.h"
#include "Manager.h"
#include "Worker.h"

#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapezoid.h"

int main() {
    /*President president("John Smith", 45, 150000, "Tech Solutions Inc.");
    Manager manager("Alice Johnson", 35, 80000, "Sales");
    Worker worker("Bob Wilson", 25, 45000, "Software Developer");

    Employer* employers[] = { &president, &manager, &worker };

    for (Employer* emp : employers) {
        emp->Print();
    }*/

    Rectangle rect(5, 4);
    Circle circle(3);
    RightTriangle triangle(6, 8);
    Trapezoid trapezoid(4, 6, 5);

    Shape* shapes[] = { &rect, &circle, &triangle, &trapezoid };

    std::cout << "Rectangle: " << shapes[0]->getArea() << std::endl;
    std::cout << "Circle: " << shapes[1]->getArea() << std::endl;
    std::cout << "Right triangle: " << shapes[2]->getArea() << std::endl;
    std::cout << "Trapezoid: " << shapes[3]->getArea() << std::endl;

    return 0;
}