#include "registry.h"

/**************************
 * ADD STUDENT
 * Adds a student to the registry
**************************/
void Registry::addStudent(const Student& student)
{
    students.push_back(student);
}


