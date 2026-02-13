#include "student.h"
#include <iostream>
#include <string>




// Display
void Student::displayStudentInfo()
{
    std::cout << "Student Name: " << this->name       << '\n';
    std::cout << "Student Age: "  << this->age        << '\n';
    std::cout << "Student Year: " << this->schoolYear << '\n';
}


