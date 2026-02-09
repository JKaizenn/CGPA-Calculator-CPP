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

// User input
double GPA::promptForGpa()
{
    std::cout << "Please enter your GPA: " << '\n';
    std::cin  >> this->gpa;

    return this->gpa;
}

// Display
void GPA::displayGpa()
{
    std::cout << "Your gpa is: " << this->gpa << '\n';
}