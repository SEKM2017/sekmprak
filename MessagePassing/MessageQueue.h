#include <string.h>
namespace MessagePassingKomponente {
	class MessageQueue {

	private:
		int slotCount;
		int slotLen;

		ThreadMutex theLock;

	public:
		int getSlotCount();

		void setSlotCount();

		int getSlotLen();

		void setSlotLen();

		bool schreiben(int nachricht);

		string lesen();
	};
}
