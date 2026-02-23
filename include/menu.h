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
#include <iostream>
#include <string>
#include <cstdlib>
class Menu
{
public:
    // Constructors 
    Menu() {menuText = "This is a menu";}

    // Menu Methods
    void displayMainMenu();
    void displayStudentMenu();
    void displayCourseMenu();

    // Get user choice
    int getInput(int choice);

    // Helper Methods

    // Clear: Clears screen after menu switch
    void clear() { system("clear"); }  

private:
    std::string menuText {};
    int choice {0};
    Registry r;
};