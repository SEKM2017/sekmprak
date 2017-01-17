
namespace MessagePassingKomponente {
	class Connect_Unit {


	public:
		void connect(MessagePassingKomponente::Kanal& kanal, MessagePassingKomponente::Aktionmanager nachricht);

		void disconnect(MessagePassingKomponente::Aktionmanager actionkManager, MessagePassingKomponente::Kanal kanal);

		bool ueberpruefeKanalVerbindung(int KanalNummer);
	};
}
