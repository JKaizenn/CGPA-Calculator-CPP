#include "course.h"

/**************************
 * CONSTRUCTOR
 * Constructs a course object with various arguments
**************************/
Course::Course(std::string courseName, std::string courseCode, 
               std::string professorName, char letterGrade, 
               unsigned int creditHours)
    : coursesName(courseName), courseCode(courseCode), 
      professorName(professorName), letterGrade(letterGrade), 
      creditHours(creditHours) {}

/**************************
 * CONVERT GRADE TO NUMERIC
 * Converts a char letter grade to a floating point number
**************************/
double Course::convertGradeToNumeric(char letterGrade) const
{
    switch (letterGrade)
    {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default : return 0.0;
    }
}