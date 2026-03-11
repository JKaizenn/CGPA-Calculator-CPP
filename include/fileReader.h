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

   // READ
   // Read Student File
   std::string readLine(const std::string& studentFileName);

   // LOAD
   // Load Student - Takes a filename and loads a student's info
   std::vector<Student> loadStudent(const std::string& fileName);

   /* Load Courses - Takes a filename and a registry object loads a list of
   courses that are associated with a given student */
   void loadCourses(const std::string& filename, Registry& r);

   /* Load From File - Takes a filename and a registry object and loads
   student data from the file into the registry */
   void loadFromFile(const std::string& filename, Registry& r);

   // HELPER
   // Parse Line - Parses a line from a given file into a string
   std::vector<std::string> parseLine(const std::string& line);

private:
   std::string studentFileName {"students.csv"};
   std::string courseFileName  {"courses.csv" };

};
