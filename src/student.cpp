#include "student.h"
#include <iostream>
#include <string>


// Sets the student's ID
int Student::nextId = 1;

/**************************
 * DEFAULT CONSTRUCTOR
**************************/
Student::Student(std::string name, int age, int schoolYear)
: name(name), age(age), schoolYear(schoolYear), studentId(nextId++) { }

/**************************
 * DISPLAY
 * Display all info pertaining to a student
**************************/
void Student::displayStudentInfo()
{
    std::cout << "Student Name: " << this->name       << '\n';
    std::cout << "Student Age: "  << this->age        << '\n';
    std::cout << "Student Year: " << this->schoolYear << '\n';
}

/**************************
 * ADD COURSE
 * Adds a course to a student's info
**************************/
void Student::addCourse(const Course& course)
{
   courses.push_back(course);
}