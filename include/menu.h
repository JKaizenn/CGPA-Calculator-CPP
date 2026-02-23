/***********************************************************************
 * Header File:
 *    Menu
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a Menu
 ************************************************************************/

#include <iostream>
#include <string>

#pragma once

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

private:
    std::string menuText {};
    int choice {0};
};