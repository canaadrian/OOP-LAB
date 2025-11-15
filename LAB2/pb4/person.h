#pragma once
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
};

bool compareByAgeDesc(const Person& p1, const Person& p2);
bool compareByNameAsc(const Person& p1, const Person& p2);
void printPeople(const std::vector<Person>& people);
