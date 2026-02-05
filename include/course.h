#include <string>
#include <string_view>

#pragma once

/*******************************
 * COURSE
 * ALL DATA RELATED TO A SCHOOL COURSE
 *******************************/
class Course
{
private:
    std::string courseName;
    std::string courseCode;
    std::string professorName;
    char grade;
    unsigned int creditHours;

public:
    // Constructors
    Course(std::string_view cN, 
           std::string_view cC, 
           std::string_view pN, 
           char g, 
           unsigned int cH) 
        : courseName(cN), 
          courseCode(cC), 
          professorName(pN), 
          grade(g), 
          creditHours(cH) 
    {}


    // Getters

    // Setters


};