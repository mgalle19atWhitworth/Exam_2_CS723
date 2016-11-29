#ifndef _BIRTHDAY_PARTY_TICKET_H_
#define _BIRTHDAY_PARTY_TICKET_H_

#include <list>
#include <string>
#include "Party.h"
#include "PartyTicket.h"

class BirthdayPartyTicket : public PartyTicket
{
private:
	Party * the_party; // the party this ticket is associated with
	std::list<std::string>::iterator name; // an iterator containing the party goer this ticket is associated with

public:

	/**
	* Constructor for creating a BirthdayPartyTicket.
	 the_party	party to which this ticket belongs
		name is who ticket is associated with
	*/
	BirthdayPartyTicket(Party *the_party, std::list<std::string>::iterator &name) :
		the_party(the_party), name(name) {}

	/**
	* Allows the party goer, "name", to leave the party, "the_party"
	**/
	void leave();
};

#endif