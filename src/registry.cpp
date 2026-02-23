#include "registry.h"

/**************************
 * ADD STUDENT
 * Adds a student to the registry
**************************/
void Registry::addStudent(const Student& student)
{
    students.push_back(student);
}

/**************************
 * LOOKUP STUDENT
 * Looks a student up from the registry by their ID
**************************/
Student* Registry::lookupStudent(int id)
{
    for (auto& student : students)
    {
        if (student.getStudentId() == id)
        {
            return &student;
        }
    }
    return nullptr; // If student is not found, return nullptr
}


/**************************
 * DISPLAY ALL STUDENTS
 * Displays all students in the registry
**************************/
void Registry::displayAllStudents()
{
    for (auto& student : students)
    {
        student.displayStudentInfo();
    }
}