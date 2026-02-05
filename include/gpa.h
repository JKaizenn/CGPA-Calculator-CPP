#include "course.h"
#include <vector>

#pragma once

class GPA
{
private:
    double gpa = 0.0;
    int creditHours;
    std::vector<Course> courses;

public:
    // Constructors:
    GPA(int cH, double g = 0.0) : gpa(g), creditHours(cH) { }

    // Getters
    double getGpa() const { return gpa; }
    int getCreditHours() const { return creditHours; }

    // Setters
    void setGpa(double gpa);
    void setCreditHours(int creditHours);

    // Calculate GPA
    double calculateCGPA(int creditHours, double gpa);

    // Display
    void display();
    void displayMenu();

};
 