#include "ThreadMutex.h"
namespace MessagePassingKomponente {
	class ThreadMutexGuard {

	private:
		MessagePassingKomponente::ThreadMutex theLock;
		bool isOwner;

	public:
		void acquire();

		void release();
	};
}
