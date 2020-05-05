#include "szlb.h"
template<class type>
sztp::szlb(uint inpux, uint inpuy) {
	xinde = inpux;
	yinde = inpuy;
	xnext = nullptr;
	ynext = nullptr;
}
template<class type>
void  sztp::sets(type inpus) {
	this->datas = inpus;
}
template<class type>
void  sztp::adds(uint inpux, uint inpuy, uint appx, uint appy) {
	szlb* temp = new szlb(inpux, inpuy);
	if (appx == 1)xnext = temp;
	if (appy == 1)ynext = temp;
}
template<class type>
void  sztp::show() {
	std::cout << "X���꣺" << this->xinde << " Y���꣺" << this->yinde << " ���ݣ�" << this->datas << std::endl;
}
template<class type>
void  sztp::show(szlb* input) {
	input->show();
	if (input->xnext != nullptr) input->xnext->show(input->xnext);
	if (input->ynext != nullptr) input->ynext->show(input->ynext);
}