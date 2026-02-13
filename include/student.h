/***********************************************************************
 * Header File:
 *    Student
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a Student
 ************************************************************************/

#include <string>

#pragma once

/************************************
 * STUDENT
 ************************************/
class Student
{
public:
    Student(std::string name, int age, int schoolYear);

    // Getters
    std::string getName() const { return name;       }
    int getAge() const          { return age;        }
    int getSchoolYear() const   { return schoolYear; }

    // Setters
    void setName(const std::string& name)    { this->name = name;             }
    void setAge(int age)               { this->age = age;               }
    void setSchoolYear(int schoolYear) { this->schoolYear = schoolYear; }

    // Get student info from user


    // Get student info from file


    // Display
    void displayStudentInfo(); 


private:

    // Member Variables 
    std::string name {};
    int age {};
    int schoolYear {};

};