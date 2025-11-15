#pragma once
#include <vector>
#include "Bus.h"
#include "Student.h"

class BusStation {
private:
    std::vector<Bus*> buses;
    std::vector<Student*> students;

public:
    void addBus(Bus* b);
    void addStudent(Student* s);

    int totalCommuters() const;

    std::vector<Bus*> findBusesStoppingAt(std::string station) const;
};
