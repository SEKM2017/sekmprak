#include "MessageQueue.h"
namespace MessagePassingKomponente {
	class Kanal {

	private:
		MessageQueue messageQueue;
		int kanalNummer;
		struct senderAntwort;
		struct empfaengerAntwort;
		//Array aktionManagerList[];

	public:
		void nachrichtenEmpfangen(MessagePassingKomponente::Aktionmanager aktionManager, string nachricht);

		void nachrichtEntnehmen(string nachricht, MessagePassingKomponente::Aktionmanager aktionManager);

		void addAktionManager(AktionManager aktionManager);

		MessageQueue getMessageQueue();

		void setMessageQueue(MessageQueue messageQueue);
	};
}
