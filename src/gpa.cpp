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



// Display
void GPA::displayGpa()
{
    std::cout << "Your gpa is: " << this->gpa << '\n';
}