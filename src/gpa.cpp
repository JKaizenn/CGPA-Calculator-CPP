/***********************************************************************
 * Source File:
 *    GPA
 * Author:
 *    Jessen
 * Summary:
 *    A collection of GPAs and logic to calculate and display to user
 ************************************************************************/

#include "gpa.h"
#include <iostream>
#include <iomanip>

/**************************
 * DISPLAY GPA
 * Display a GPA with 3 decimal places, eg: 3.950
**************************/
void GPA::displayGpa()
{
    std::cout << "Your gpa is: " << std::fixed << std::setprecision(3) << this->gpa << '\n';
}

/**************************
 * CALCULATE GPA
 * Calculates the Student's GPA using their course info
**************************/
void GPA::calculateGpa(const std::vector<Course>& courses)
{
   double totalGradePoints {0.0};
   unsigned int totalCreditHours {0};

   // Loop through all courses
   for (const Course& course : courses)
   {
      totalCreditHours += course.getCreditHours();
      totalGradePoints += course.convertGradeToNumeric(course.getLetterGrade());
   }

   // Check if there are courses and then calculate
   if (totalCreditHours > 0)
   {
      this->gpa = totalGradePoints / totalCreditHours;
   }
}
