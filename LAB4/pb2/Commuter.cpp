#include "Commuter.h"

Commuter::Commuter(std::string name, Address address, int ticket)
    : Person(name, address) {
    this->ticketNumber = ticket;
}

int Commuter::getTicket() const { return ticketNumber; }
