/***********************************************************************
 * Header File:
 *    File Reader
 * Author:
 *    Jessen
 * Summary:
 *    Everything we need to know about a File Reader
 ************************************************************************/

#pragma once

#include "student.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <regex>
#include <vector>
class Registry; // Forward Declare Registry

/************************************
 * FILE READER
 ************************************/
class FileReader
{
public:
   // Default Constructor
   FileReader(const std::string& studentFileName, const std::string& courseFileName) {}

   // Read File

   // Read Student File
   std::string readLine(const std::string& studentFileName);

   // Load 
   std::vector<Student> loadStudent(const std::string& fileName);

   // Load File
   void loadFromFile(const std::string& filename, Registry& r);

   // Parse Line
   std::vector<std::string> parseLine(const std::string& line);

private:
   std::string studentFileName {"students.csv"};
   std::string courseFileName  {"courses.csv" };

};
