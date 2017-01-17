#include "Kanal.h"
#include "Aktionmanager.h"
#include <string.h>
void MessagePassingKomponente::Kanal::nachrichtenEmpfangen(MessagePassingKomponente::Aktionmanager aktionManager, string nachricht) {
	// TODO - implement Kanal::nachrichtenEmpfangen
	throw "Not yet implemented";
}

void MessagePassingKomponente::Kanal::nachrichtEntnehmen(string nachricht, MessagePassingKomponente::Aktionmanager aktionManager) {
	// TODO - implement Kanal::nachrichtEntnehmen
	throw "Not yet implemented";
}

void MessagePassingKomponente::Kanal::addAktionManager(AktionManager aktionManager) {
	// TODO - implement Kanal::addAktionManager
	throw "Not yet implemented";
}

MessageQueue MessagePassingKomponente::Kanal::getMessageQueue() {
	return this->messageQueue;
}

void MessagePassingKomponente::Kanal::setMessageQueue(MessageQueue messageQueue) {
	this->messageQueue = messageQueue;
}
