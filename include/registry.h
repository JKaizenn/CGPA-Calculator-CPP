/***********************************************************************
 * Header File:
 *    Registry
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a Registry
 ************************************************************************/

#pragma once

#include "student.h"
#include <string>
#include <vector>

class Registry
{
public:

// Add a student to the registry
void addStudent(const Student& student);

// Lookup a student from the regisrty
Student* lookupStudent(int id);

// Display
void displayAllStudents();

private:
    std::vector<Student> students {};
};