#pragma once
#include <vector>
#include "Person.h"
#include "Mosquito.h"

class Apartment {
private:
    std::vector<Person*> people;
    std::vector<Mosquito*> mosquitos;

public:
    void addPerson(Person* p);
    void removePerson(Person* p);

    void addMosquito(Mosquito* m);
    void removeMosquito(Mosquito* m);

    bool containsMosquito(std::string id) const;
};
