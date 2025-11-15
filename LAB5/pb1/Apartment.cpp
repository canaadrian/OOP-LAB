#include "Apartment.h"
#include <algorithm>

void Apartment::addPerson(Person* p) { people.push_back(p); }

void Apartment::removePerson(Person* p) {
    people.erase(std::remove(people.begin(), people.end(), p), people.end());
}

void Apartment::addMosquito(Mosquito* m) { mosquitos.push_back(m); }

void Apartment::removeMosquito(Mosquito* m) {
    mosquitos.erase(std::remove(mosquitos.begin(), mosquitos.end(), m), mosquitos.end());
}

bool Apartment::containsMosquito(std::string id) const {
    for (auto m : mosquitos)
        if (m->getId() == id)
            return true;
    return false;
}
