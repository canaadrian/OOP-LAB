#pragma once
#include "Person.h"

class Student : public Person {
private:
    std::string faculty;

public:
    Student(std::string name = "", Address addr = Address(), std::string faculty = "");
    std::string getFaculty() const;
};
