#include <iostream>
#include <vector>
#include <algorithm>
#include "person.h"

using namespace std;

int main() {
    vector<Person> people = {
        {"Alex", 30},
        {"Maria", 22},
        {"George", 21},
        {"Bianca", 25}
    };

    cout << "Original:\n";
    printPeople(people);

    vector<Person> byAge = people;
    sort(byAge.begin(), byAge.end(), compareByAgeDesc);
    cout << "Sorted by age (DESC):\n";
    printPeople(byAge);

    vector<Person> byName = people;
    sort(byName.begin(), byName.end(), compareByNameAsc);
    cout << "Sorted by name (ASC):\n";
    printPeople(byName);

    return 0;
}
