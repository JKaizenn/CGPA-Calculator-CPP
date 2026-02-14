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



// Display a GPA with 3 decimal places, eg: 3.950
void GPA::displayGpa()
{
    std::cout << "Your gpa is: " << std::fixed << std::setprecision(3) << this->gpa << '\n';
}