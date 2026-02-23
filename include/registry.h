/***********************************************************************
 * Header File:
 *    Registry
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a Registry
 ************************************************************************/

#include "student.h"
#include <string>
#include <vector>

#pragma once


class Registry
{
public:


void addStudent(const Student& student);

Student* lookupStudent(int id);


private:
    std::vector<Student> students {};


};