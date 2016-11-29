#ifndef _BIRTHDAY_PARTY_H_
#define _BIRTHDAY_PARTY_H_

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Party.h"
#include "BirthdayPartyTicket.h"


/**
* BirthdayParty is derived from Party
*/
class BirthdayParty : public Party
{
private:
	std::list<std::string> room; // Data structure for containing the party goers in this dinner party

	 /**
	 * The constuctor for creating a BirthdayParty
	 */
	BirthdayParty() {}

	friend class PartyFactory;

public:

	/**
	* Adds someone to the party
	*/
	PartyTicket * add(std::string name) {
		
		room.push_front(name);
		std::list<std::string>::iterator front = room.begin();
		/*typename std::string front = name;*/
		BirthdayPartyTicket Birthday(BirthdayParty *this_party(), typename std::string front);

		return 0;
	}

	/**
	*Outputs all the people in the room
	*/
	void list() {
		std::list<std::string>::iterator iter = room.begin();
		while (iter != room.end())
		{
			std::cout << *iter;

			++iter;
		}
	}

	/**
	* Removes the person from the room	*/
	void remove(std::list<std::string>::iterator it) {
	
		room.erase(it);
	}
};


#endif