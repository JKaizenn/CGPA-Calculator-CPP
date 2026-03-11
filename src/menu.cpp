#include "menu.h"
#include <iostream>
#include <limits>

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
    // Start the user input switch statement
    int choice {0};
    while (choice != 4)
    {
        // Displays the Main Menu
        printMainMenu();
        switch(choice = getInput(choice))
        {
            case 1:
            {   
               int id {0};
               // Calculate GPA Code goes here
               std::cout << "Please enter a Student ID:" << '\n';
               std::cin >> id;
               Student* found = r.lookupStudent(id);
               if (found != nullptr)
               {
                  gpa.calculateGpa(found->getCourses());
                  gpa.displayGpa();
               }
               else
                  std::cout << "No student found.\n";
               break;
            }

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
    // Start the user input switch statement
    int choice {0};
    while (choice != 4)
    {
        printStudentMenu();
        switch(choice = getInput(choice))
        {
            case 1:
            {
                std::cout << "Please enter a Student ID: " << '\n';
                int id {0};
                std::cin >> id;
                Student* found = r.lookupStudent(id);
                if (found != nullptr)
                    found->displayStudentInfo();
                else
                    std::cout << "Student not found.\n";
                break;
            }

            // Add Student to Registry
            case 2:
            {
                // Create student variables
                std::string name;
                int age;
                int schoolYear;

                // Prompt user and handle input, handles multi-spaced strings
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter name: ";
                std::getline(std::cin, name);
                std::cout << "Enter age: ";
                std::cin >> age;

                // Ensures user input is the correct type (int)
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input, please enter a number.\n";
                    break;
                }
                std::cout << "Enter school year: (Eg: 1-4) ";
                std::cin.ignore();
                std::cin >> schoolYear;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input, please enter a number.\n";
                    break;
                }
                // Create a student object comprised of name, age, and school year and displays success message
                Student student(name, age, schoolYear);
                r.addStudent(student);
                std::cout << "Student added with ID: " << student.getStudentId() << '\n';
                break;
            }

            // Display Student Courses
            case 3:
            {
                std::cout << "Please enter a student ID: " << '\n';
                int id {0};
                std::cin >> id;
                Student* found = r.lookupStudent(id);
                if (found != nullptr)
                {
                    found->displayStudentCourses();
                }
                else
                    std::cout << "Student not found.\n";
                break;
            }

            default:
            std::cout << "Returning to main menu..." << '\n';
        }
    }
}

/**************************
 * DISPLAY COURSE MENU
 * Displays the course menu
**************************/
void Menu::displayCourseMenu()
{
    // Start the user input switch statement
    int choice {0};
    while (choice != 4)
    {
        printCourseMenu();
        switch(choice = getInput(choice))
        {
            case 1:
            // TODO: Lookup Course Logic Goes Here
            std::cout << "Finding Student..." << '\n';

            break;

            // TODO: View All Course Logic Goes Here
            case 2:
            std::cout << "Adding Student to Registry...\n";
            break;

            // TODO: Add Display Course Info Here
            case 3:
            std::cout << "Pulling Up Student Info...\n";
            break;

            default:
            std::cout << "Returning to main menu..." << '\n';
        }
    }
}

/**************************
 * PRINT MAIN MENU
 * Makes a reusable menu variable
**************************/
void Menu::printMainMenu()
{
    clear(); // Clear the screen
    std::cout << "\nWelcome to the CGPA Calculator!\n" << '\n';
    std::cout << "Please select from one of the following menu options: " << '\n';
    std::cout << "Menu: " << '\n';
    std::cout << "1. Calculate GPA \n"
              << "2. Student Menu \n"
              << "3. Course Menu \n"
              << "4. Quit \n"
              << '\n';
}

/**************************
 * PRINT STUDENT MENU
 * Makes a reusable student menu variable
**************************/
void Menu::printStudentMenu()
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
 * PRINT COURSE MENU
 * Makes a reusable course menu variable
**************************/
void Menu::printCourseMenu()
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



