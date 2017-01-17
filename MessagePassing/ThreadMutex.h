
namespace MessagePassingKomponente {
	class ThreadMutex {

	private:
		bool isInitialisiert;
		CRITICAL_SECION theMutex;

	public:
		void acquire(int waitOnEntry);

		void release();
	};
}
