#include "Commuter.h"

Commuter::Commuter(std::string name, Address addr, int ticket)
    : Person(name, addr), ticket(ticket) {}

int Commuter::getTicket() const { return ticket; }
