#include "President.h"
#include "Manager.h"
#include "Worker.h"

#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapezoid.h"

#include "Square.h"
#include "Ellipse.h"

Shape* createShape(const std::string& type) {
    if (type == "Square") return new Square();
    if (type == "Rectangle") return new Rectangle();
    if (type == "Circle") return new Circle();
    if (type == "Ellipse") return new Ellipse();
    return nullptr;
}

int main() {
    /*President president("John Smith", 45, 150000, "Tech Solutions Inc.");
    Manager manager("Alice Johnson", 35, 80000, "Sales");
    Worker worker("Bob Wilson", 25, 45000, "Software Developer");

    Employer* employers[] = { &president, &manager, &worker };

    for (Employer* emp : employers) {
        emp->Print();
    }*/

    /*Rectangle rect(5, 4);
    Circle circle(3);
    RightTriangle triangle(6, 8);
    Trapezoid trapezoid(4, 6, 5);

    Shape* shapes[] = { &rect, &circle, &triangle, &trapezoid };

    std::cout << "Rectangle: " << shapes[0]->getArea() << std::endl;
    std::cout << "Circle: " << shapes[1]->getArea() << std::endl;
    std::cout << "Right triangle: " << shapes[2]->getArea() << std::endl;
    std::cout << "Trapezoid: " << shapes[3]->getArea() << std::endl;*/

    const int SHAPES_COUNT = 4;

    Shape* shapes[SHAPES_COUNT];
    shapes[0] = new Square(0, 0, 5);
    shapes[1] = new Rectangle(2, 2, 4, 3);
    shapes[2] = new Circle(5, 5, 3);
    shapes[3] = new Ellipse(1, 1, 6, 4);

    std::ofstream outFile("shapes.txt");
    if (outFile.is_open()) {
        outFile << SHAPES_COUNT << "\n";
        for (int i = 0; i < SHAPES_COUNT; i++) {
            shapes[i]->Save(outFile);
        }
        outFile.close();
    }

    Shape* loadedShapes[SHAPES_COUNT];
    std::ifstream inFile("shapes.txt");
    if (inFile.is_open()) {
        int count;
        inFile >> count;
        std::string type;

        for (int i = 0; i < count && i < SHAPES_COUNT; i++) {
            inFile >> type;
            loadedShapes[i] = createShape(type);
            if (loadedShapes[i]) {
                loadedShapes[i]->Load(inFile);
            }
        }
        inFile.close();
    }

    std::cout << "Shapes:\n";
    for (int i = 0; i < SHAPES_COUNT; i++) {
        loadedShapes[i]->Show();
    }

    for (int i = 0; i < SHAPES_COUNT; i++) {
        delete shapes[i];
        delete loadedShapes[i];
    }

    return 0;
}