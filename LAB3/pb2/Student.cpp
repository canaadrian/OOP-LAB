#include "Student.h"

Student::Student(string name, int grade) {
    this->name = name;
    this->grade = grade;
}

string Student::getName() const { return name; }
int Student::getGrade() const { return grade; }
