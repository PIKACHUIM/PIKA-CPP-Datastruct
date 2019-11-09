//
// Created by 皮卡丘 on 2019/11/7.
//

#include "strs.hpp"
//------------构造函数-------------------
     strs::strs(){
    this->data=new char[128];
    memset(this->data,0,strlen(data));
}
     strs::strs(char inpu[]){
    strcpy(data,inpu);
}
     strs::strs(string inpu) {
    data=(char*)inpu.c_str();
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
        uint lens=strlen(in2.data);
        uint thln=strlen(in1.data);
    for(uint loop=thln;loop<=thln+lens-1;loop++)
        in1.data[loop]=in2.data[loop-thln];
        in1.data[thln+lens]='\0';
    return in1.data;
}

uint strs::kmps(char* inpu) {

}

int* strs::next(char* inpu) {
    int* temp=new int[strlen(inpu)+1];
    temp[0]=-1;
    for(int loop=0;loop<=strlen(inpu)-1;loop++)
    {
        
    }
}