#include "fileReader.h"


/**************************
 * READ LINE
 * Reads each line from a given file
**************************/
std::string FileReader::readLine(const std::string& studentFileName)
{
    std::ifstream file(studentFileName);
    std::string line {""};

    if (!file.is_open()){
        std::cerr << "Error opening file!" << '\n';
        return "";
    }

    while (std::getline(file, line))
    {
        std::cout << line << '\n';
    }

    file.close();
    return "";
}

/**************************
 * LOAD STUDENTS
 * Opens a file containing student data and returns the student data found
**************************/
std::vector<Student> FileReader::loadStudent(const std::string& fileName)
{
    // Open file
    std::ifstream file(fileName);
    std::string line;
    std::vector<Student> students;

    // Check if file is open
    if (!file.is_open())
    {
        std::cerr << "Error opening file!" << '\n';
        return students;
    }
    std::getline(file, line);

    // Get each line from students and set each field according to parameter 
    // Defined in Constructor, push object to vector
    while (std::getline(file,line))
    {
        auto fields = parseLine(line);
        Student student (fields[0], std::stoi(fields[1]), std::stoi(fields[2]));
        students.push_back(student);
    }
    
    return students;
}

/**************************
 * PARSE LINE
 * Parses a line in a CSV file to properly separate strings
**************************/
std::vector<std::string> FileReader::parseLine(const std::string& line)
{
    std::vector<std::string> fields;
    std::stringstream ss(line);
    std::string field;
    while (std::getline(ss, field, ','))
        fields.push_back(field);
    return fields;
}

