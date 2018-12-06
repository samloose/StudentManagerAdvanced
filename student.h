#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include <vector>


class student
{
private:
        std::string first;
        std::string last;
        std::vector <double> grades;
public:
    student();
    void setName(std::string, std::string);
    std::string fullName();
    void addGrade(double);
    double getScore();
};

#endif
