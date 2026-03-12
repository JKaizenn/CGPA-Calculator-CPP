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
 * LOOKUP STUDENT COURSE
 * Looks up a student's course info
**************************/
Course* Student::lookupStudentCourse(const std::string& courseCode)
{
    for (Course& course : courses)
    {
        if (course.getCourseCode() == courseCode)
            return &course;
    }
    return nullptr;
}

/**************************
 * DISPLAY
 * Display all info pertaining to a student
**************************/
void Student::displayStudentInfo() const
{
    std::cout << "Student Name: " << this->name       << '\n';
    std::cout << "Student Age: "  << this->age        << '\n';
    std::cout << "Student Year: " << this->schoolYear << '\n';
}

/**************************
 * DISPLAY STUDENT COURSES
 * Displays all of a student's courses and info
**************************/
void Student::displayStudentCourses() const
{
    for (const Course& course : courses)
    {
        course.displayCourseInfo();
    }
}

/**************************
 * ADD COURSE
 * Adds a course to a student's info
**************************/
void Student::addCourse(const Course& course)
{
   courses.push_back(course);
}