#include "Student.h"

Student::Student(std::string name, Address addr, std::string faculty)
    : Person(name, addr), faculty(faculty) {}

std::string Student::getFaculty() const { return faculty; }
