#include "President.h"
#include "Manager.h"
#include "Worker.h"

int main() {
    President president("John Smith", 45, 150000, "Tech Solutions Inc.");
    Manager manager("Alice Johnson", 35, 80000, "Sales");
    Worker worker("Bob Wilson", 25, 45000, "Software Developer");

    Employer* employers[] = { &president, &manager, &worker };

    for (Employer* emp : employers) {
        emp->Print();
    }

    return 0;
}