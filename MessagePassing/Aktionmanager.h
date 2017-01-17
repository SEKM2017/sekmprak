
namespace MessagePassingKomponente {
	class Aktionmanager {

	private:
		string type;
		int id;
		bool connectionAvailable;

	public:
		void getType();

		void setType(int type);

		void getId();

		void setId(int id);

		bool connectRequest(int connectUnit, int KanalNummer);

		string nachrichtEntnehmen();

		void nachrichtSenden(string nachricht);
	};
}
