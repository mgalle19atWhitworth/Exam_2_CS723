#include "BirthdayPartyTicket.h"
#include "BirthdayParty.h"

/**
* Implements the leave method
*/
void BirthdayPartyTicket::leave() {
	BirthdayParty * actual_party = dynamic_cast<BirthdayParty *>(the_party); 
	actual_party->remove(name); // remove the person who is "name"
}