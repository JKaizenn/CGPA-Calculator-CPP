#include "gpa.h"


// User input
double GPA::promptForGpa()
{
    std::cout << "Please enter your GPA: " << '\n';
    std::cin  >> this->gpa;

    return this->gpa;
}