#include "gpa.h"
#include <iostream>

// CGPA Calculator
// Objective: A simple command line program that calculates a Cumulative GPA based on user input

int main()
{
    // Define GPA Object
    GPA gpa;

    std::cout << "Welcome to the CGPA Calculator!" << '\n';
    gpa.promptForGpa();
    gpa.displayGpa();


    return 0;
}