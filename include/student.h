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
    int getStudentId() const    { return studentId;  }
  
    // Setters
    void setName(const std::string& name) { this->name = name;             }
    void setAge(int age)                  { this->age = age;               }
    void setSchoolYear(int schoolYear)    { this->schoolYear = schoolYear; }
    void setStudentId(int studentId)      { this->studentId  = studentId;  }

    // Get student info from user


    // Get student info from file


    // Display
    void displayStudentInfo(); 

private:

    // Member Variables 
    std::string name {};
    int age {};
    int schoolYear {};
    static int nextId; // To distinguish student ids
    int studentId {};


};