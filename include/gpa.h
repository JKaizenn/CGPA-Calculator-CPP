/***********************************************************************
 * Header File:
 *    GPA
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a GPA
 ************************************************************************/

#pragma once

#include "course.h"
#include <vector>

/************************************
 * GPA
 ************************************/
class GPA
{
public:
    // Construtors
    GPA() : gpa(0.0) {};

    // Getters
    double getGpa() const { return gpa; }

    // Setters
    void setGpa(double gpa) { this->gpa = gpa; }

    // Display
    void displayGpa();
    
    // Calculate GPA
    void calculateGpa(const std::vector<Course>& courses);
    
private:
    double gpa {};
    double convertToInt(double gpa) const {
        return static_cast<int>(gpa);
    }
};