#include "menu.h"
#include <iostream>


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
}