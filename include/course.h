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

    // Getters
    char getLetterGrade() const { return letterGrade; }
    unsigned int getCreditHours() const { return creditHours; }

    // Setters
    void setLetterGrade(char letterGrade) { this->letterGrade = letterGrade; }
    void setCreditHours(unsigned int creditHours) { this->creditHours = creditHours; }

    // Convert letter grade to numeric
    double convertGradeToNumeric(char letterGrade) const;

private:
    std::string coursesName {};
    std::string courseCode {};
    std::string professorName {};
    char letterGrade {};
    unsigned int creditHours {};
};
