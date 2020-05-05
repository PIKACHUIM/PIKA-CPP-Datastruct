#include "tree.h"
template<class type>
trtp::tree() {
	this->data = *(new type());
	this->lnex = nullptr;
	this->rnex = nullptr;
}
template<class type>
trtp::tree(type inpu) {
	tree();
	data = inpu;
}
template<class type>
void trtp::addc(bool choo, type inpu) {
	tree* temp = new tree(inpu);
	if (!choo)
		this->lnex = temp;
	else
		this->rnex = temp;
}
template<class type>
void trtp::show_fron() {
	std::cout << this->data << " ";
	if (this->lnex != nullptr)
		this->lnex->show_fron();
	if (this->rnex != nullptr)
		this->rnex->show_fron();
}
template<class type>
void trtp::show_back() {
	if (this->lnex != nullptr)
		this->lnex->show_back();
	if (this->rnex != nullptr)
		this->rnex->show_back();
	std::cout << this->data << " ";
}
template<class type>
void trtp::show_midd() {
	if (this->lnex != nullptr)
		this->lnex->show_midd();
	std::cout << this->data << " ";
	if (this->rnex != nullptr)
		this->rnex->show_midd();
}