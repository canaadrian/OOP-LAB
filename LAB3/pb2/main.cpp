#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"
using namespace std;

int main() {
    vector<Student> students = {
        Student("Ana", 9),
        Student("Alex", 10),
        Student("Mara", 7)
    };

    string nameSearch = "Alex";

    auto it = find_if(students.begin(), students.end(),
        [nameSearch](const Student& s) {
            return s.getName() == nameSearch;
        });

    if (it != students.end())
        cout << "Found: " << it->getName() << " grade: " << it->getGrade() << endl;
    else
        cout << "Not found." << endl;

    return 0;
}
