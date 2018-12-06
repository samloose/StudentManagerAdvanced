#include "student.h"
#include <string>
#include <vector>

student::student()
{
    first = "";
    last = "";
    grades.push_back(0);
}
void student::setName(std::string firstName, std::string lastName)
{
    first = firstName;
    last = lastName;
}

std::string student::fullName()
{
        std::string name;
    name = first + " " + last;
    return name;
}
void student::addGrade(double grade)
{
    grades.push_back(grade);
}
double student::getScore()
{
    double average = 0;
    int count = 0;
    grades.erase(grades.begin(),grades.begin()+1);
    for(int i=0; i<grades.size(); i++)
    {
        average = average + grades[i];
        count ++;
    }
    average = average / count;
    return average;
}
