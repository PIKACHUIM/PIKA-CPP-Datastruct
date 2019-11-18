//
// Created by 皮卡丘 on 2019/11/7.
//

#include "strs.hpp"
//------------构造函数-------------------
     strs::strs(){
    this->data=new char[128];
    memset(this->data,0,128);
}
     strs::strs(char inpu[]){
    strcpy(data,inpu);
}
     strs::strs(string inpu) {
		 uint  lens = inpu.length();
		 char* temp = new char[lens];
         strcpy(temp,inpu.c_str());
		 data = temp;
}
//------------设置函数-------------------
void strs::sets(char*  inpu) {
    strcpy(data,inpu);
}
void strs::sets(string inpu) {
    data=(char*)inpu.c_str();
}
//------------显示函数-------------------
void strs::show() {
    uint maxl=strlen(data);
	cout << "NOW STRS LENS: " << maxl<<endl;
    for(uint loop=0;loop<maxl;loop++)
        std::cout<<data[loop];
        std::cout<<std::endl;
}
void strs::dela() {
    memset(this->data,0,strlen(data));
}
uint strs::getl() {
    return (uint)strlen(data);
}

strs strs::operator=(strs inpu) {

    char* temp=new char[strlen(inpu.data)];
    strcpy(temp,inpu.data);
    this->data=temp;
    return *this;
}
strs operator+(const strs &in1,const strs &in2) {
	
	strcat(in1.data, in2.data);
    return in1;
}

uint strs::kmps(string inpu) {
	string main = this->data;
	string sear = inpu;
	uint   lens = main.length();
	int*   data = this->next(sear);
	char   str1[1024];
	char   str2[1024]; 
	strcpy(str2,(char*)sear.c_str());
	strcpy(str1,(char*)main.c_str());
	uint   coun = 0;
	uint   loop = 0;
	while (coun < lens && loop < lens) {
		if (loop == -1 || str2[coun] == str1[loop]) {
			coun++;
			loop++;}
		else {
			loop = data[loop];}
	}
	return loop == (main.length()) ? coun - loop : -1;
}

int* strs::next(string inpu) {
	char*  temp = (char*) inpu.c_str();
	 int*  next = new int[1024000];
	 for (int tplp = 0; tplp <= 1023999; tplp++)
		 next[tplp] = 0;
	       next[0] = -1;
	 uint  loop = 0,coun = -1;
	 while(loop < inpu.length()- 1) {
		 if (coun == -1 || temp[coun] == temp[loop]) {
			 next[++loop] = ++coun;}
		 else {
			 coun = next[coun];}}
	 return next;
}


