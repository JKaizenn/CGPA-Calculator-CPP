#include "course.h"

/**************************
 * CONSTRUCTOR
 * Constructs a course object with various arguments
**************************/
Course::Course(std::string courseName, std::string courseCode, 
               std::string professorName, char letterGrade, 
               unsigned int creditHours)
    : courseName(courseName), courseCode(courseCode), 
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

/**************************
 * DISPLAY ALL COURSES
 * Displays all course info
**************************/
void Course::displayCourseInfo() const
{
    std::cout << "Course Name: "    << this->courseName    << '\n';
    std::cout << "Course Code: "    << this->courseCode    << '\n';
    std::cout << "Professor Name: " << this->professorName << '\n';
    std::cout << "Letter Grade: "   << this->letterGrade   << '\n';
    std::cout << "Credit Hours: "   << this->creditHours   << '\n';
}
