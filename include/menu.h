/***********************************************************************
 * Header File:
 *    Menu
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a Menu
 ************************************************************************/

#pragma once

#include "registry.h"
#include "course.h"
#include "gpa.h"
#include <iostream>
#include <string>
#include <cstdlib>
class Menu
{
public:
    // Constructors 
    Menu(Registry& r) : r(r) {menuText = "This is a menu";}

    // Menu Methods
    void displayMainMenu();
    void displayStudentMenu();
    void displayCourseMenu();
    
    // Calculate GPA
    GPA calculateGPA(int);

    // Get user choice
    int getInput(int choice);

    // Helper Methods
    // Print Main Menu - Stores the main menu text and prints when called
    void printMainMenu();
    
    void printStudentMenu();

    void printCourseMenu();

    // Clear: Clears screen after menu switch
    void clear() { system("clear"); }  

private:
    std::string menuText {};
    int choice {0};
    Registry& r;
    GPA gpa;
};