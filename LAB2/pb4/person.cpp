#include "person.h"
#include <iostream>

bool compareByAgeDesc(const Person& p1, const Person& p2) {
    return p1.age > p2.age;
}

bool compareByNameAsc(const Person& p1, const Person& p2) {
    return p1.name < p2.name;
}

void printPeople(const std::vector<Person>& people) {
    for (const auto& p : people)
        std::cout << p.name << " (" << p.age << ")\n";
    std::cout << "---------------------------\n";
}
