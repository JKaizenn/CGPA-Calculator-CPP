#include "student.h"
#include <iostream>
#include <string>


int Student::nextId = 1;
// Constructor
Student::Student(std::string name, int age, int schoolYear)
: name(name), age(age), schoolYear(schoolYear), studentId(nextId++) { }


// Display
void Student::displayStudentInfo()
{
    std::cout << "Student Name: " << this->name       << '\n';
    std::cout << "Student Age: "  << this->age        << '\n';
    std::cout << "Student Year: " << this->schoolYear << '\n';
}


