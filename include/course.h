/***********************************************************************
 * Header File:
 *    Course
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a Course
 ************************************************************************/

#pragma once

#include <string>

/************************************
 * COURSE
 ************************************/
class Course
{
public:
    
    // Constructors
    Course(std::string courseName);
    Course(std::string courseName, 
           std::string courseCode, 
           std::string professorName,
           char letterGrade, 
           unsigned int creditHours );

private:
    std::string coursesName {};
    std::string courseCode {};
    std::string professorName {};
    char letterGrade {};
    unsigned int creditHours {};

    // Convert letter grade to numeric
    double convertGradeToNumeric(char letterGrade); 
};

w