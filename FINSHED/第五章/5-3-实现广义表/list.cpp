#include "list.h"
	list:: list() {
	lens    = 0;
	data[0] = nullptr;
}
	 list::list(void* inpu) {
		 list();
		 appe(inpu);
	 }
void list::appe(void* inpu) {
	data[lens] = inpu;
	lens++;
}
void* list::poph() {
	lens--;
	void* temp = data[lens];
	data[lens] = nullptr;
	return temp;
}
uint list::glen() {
	return lens;
}
