#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"
using namespace std;

int main() {
    vector<Student> students = {
        Student("Ana", 9),
        Student("Alex", 10),
        Student("Mihai", 10),
        Student("Maria", 8)
    };

    int maxGrade = -1;

    for (auto& s : students)
        if (s.getGrade() > maxGrade)
            maxGrade = s.getGrade();

    cout << "Students with max grade (" << maxGrade << "):" << endl;

    for (auto& s : students)
        if (s.getGrade() == maxGrade)
            cout << s.getName() << " -> " << s.getGrade() << endl;

    return 0;
}
x
