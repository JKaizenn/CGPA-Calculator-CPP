#include "menu.h"
#include <iostream>

/**************************
 * GET INPUT
 * Gives the user a std::cin prompt to enter their choice
**************************/
int Menu::getInput(int choice)
{
    std::cout << "Please enter a number: " << '\n';
    std::cin >> choice;
    return choice;
}

/**************************
 * DISPLAY MAIN MENU
 * Displays the main menu for user input
**************************/
void Menu::displayMainMenu()
{
    std::cout << "\nWelcome to the CGPA Calculator!\n" << '\n';
    std::cout << "Please select from one of the following menu options: " << '\n';
    std::cout << "Menu: " << '\n';
    std::cout << "1. Calculate GPA by grade \n"
              << "2. Student Menu \n"
              << "3. Course Menu \n"
              << "4. Quit \n"
              << '\n';

    // Start the user input switch statement
    int choice {0};
    while (choice != 4)
    {
        switch(choice = getInput(choice))
        {
            case 1:
            // Calculate GPA Code goes here
            std::cout << "Calculating GPA..." << '\n';
            break;

            // Direct User to Student Menu
            case 2:
            std::cout << "Taking user to student menu...\n";
            displayStudentMenu();
            break;

            case 3:
            std::cout << "Taking user to course menu...\n";
            displayCourseMenu();
            break;

            default:
            std::cout << "Goodbye!" << '\n';
        }
    }
}

/**************************
 * DISPLAY STUDENT MENU
 * Displays the student menu
**************************/
void Menu::displayStudentMenu()
{
    std::cout << "------------------- \n"
              << "STUDENT MENU: \n" 
              << '\n'
              << "1. Lookup Student \n"
              << "2. Add Student to Registry \n"
              << "3. Display Student Info \n"
              << "4. Back to Main Menu \n"
              << "-------------------"
              << '\n';
}

/**************************
 * DISPLAY COURSE MENU
 * Displays the course menu
**************************/
void Menu::displayCourseMenu()
{
    std::cout << "------------------- \n"
              << "COURSE MENU: \n" 
              << '\n'
              << "1. Lookup Course \n"
              << "2. View All Courses \n"
              << "3. Display Course Info \n"
              << "4. Back to Main Menu \n"
              << "-------------------"
              << '\n';
}
