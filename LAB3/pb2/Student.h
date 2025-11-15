#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    Student(string name, int grade);
    string getName() const;
    int getGrade() const;
};

#endif
