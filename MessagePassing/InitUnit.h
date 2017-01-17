
namespace MessagePassingKomponente {
	class InitUnit {

	private:
		bool istInitialisiert;

	public:
		bool Init(int Kanalliste_Liste);

		bool ReInit(int Kanalliste_Liste);

		bool erzeugeKanal();

		bool zerstoereKanal();
	};
}
