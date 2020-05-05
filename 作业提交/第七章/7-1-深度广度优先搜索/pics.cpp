#include "pics.h"

template<class type>
pitp::pics() {
	lens = 0;
	nums = 0;
	next[0] = nullptr;
}

template<class type>
pitp::pics(type inpu) {
	lens = 0;
	nums = 0;
	next[0] = nullptr;
	this->data = inpu;
}

template<class type>
void pitp::adds(type inpu) {
	pitp* temp=new pitp(inpu);
	lens++;
	next[lens] = temp;
}

template<class type>
void pitp::adds(pics* inpu) {
	lens++;
	next[lens] = inpu;
}

template<class type>
void pitp::show(bool slet,uint coun) {
	if (!slet&&this->nums < coun) {
		std::cout << data << " ";
		nums++;
		for (uint loop = 1; loop <= lens; loop++)
			this->next[loop]->show(0,coun);}
	if (slet && this->nums<=coun) {
		if (this->nums <coun) {
			nums = coun; std::cout << this->data << " ";}
		for (uint loop = 1; loop <= lens; loop++) {
			if (this->next[loop]->nums < coun) {
				this->next[loop]->nums++;
				std::cout<<this->next[loop]->data<<" ";}}
		for (uint loop = 1; loop <= lens; loop++)
			this->next[loop]->show(1, coun);}
}