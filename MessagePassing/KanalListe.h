#include "Kanal.h"
namespace MessagePassingKomponente {

	class KanalListe {

	private:
		int anzahlMaxKanaele;

	public:
		static KanalListe Exemplar(int slots);

		void add(MessagePassingKomponente::Kanal kanal);
		MessagePassingKomponente::Kanal findKanalById(int kanalNummer);
	};
}
