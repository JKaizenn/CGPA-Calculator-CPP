#include "menu.h"
#include "gpa.h"
#include "student.h"
#include "registry.h"
#include "fileReader.h"
#include <iostream>

// CGPA Calculator
// Objective: A simple command line program that calculates a Cumulative GPA based on user input

/*
Program Description:
A student's cumulative grade point average (CGPA) can be determined using the C++ program CGPA Calculator. 
The user's input is used to compute the CGPA, which includes information like the number of courses taken and the grades earned in each one. 
The program also shows each student's overall course grade. 
CGPA Calculator calculates a student’s Cumulative Grade Point Average (CGPA) from the given exam results. 
The program can show the individual grades of each course, 
calculate total credits and total grade points achieved, 
determine the GPA for the semester, 
and based on all the data, 
it can generate and present the CGPA of the student. 
*/ 

int main()
{
    GPA gpa;
    Registry r;
    Menu m(r);
    FileReader fr("data/students.csv", "data/courses.csv");
    fr.loadFromFile("data/students.csv", r);
    fr.loadCourses("data/courses.csv", r);
    
    m.displayMainMenu();

    return 0;
}