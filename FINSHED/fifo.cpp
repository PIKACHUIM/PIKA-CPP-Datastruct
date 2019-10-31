//
// Created by 皮卡丘 on 2019/10/31.
//
#include "fifo.hpp"
template <class type>
fitp::fifo() {
    lens=0;
}
template <class type>
fitp::fifo(type inpu) {
lens=1;
data.data= inpu;
data.head= true;
data.next= nullptr;
}
template <class type>
type fitp::pops() {
    if(lens<=0){
        std::cout<<"[WARN]TRY DELING AN EMP FIFO"<<std::endl;
        lens=0;throw (-1);}
    type temp=this->data.data;
    if(this->data.next== nullptr)
        return this->data.data;
    else
    {
        this->data.data=this->data.next->data;
        this->data.next=this->data.next->next;
    }
    lens--;
    return temp;
}
template <class type>
void fitp::push(type inpu) {
    if(lens==0)
        this->data=inpu;
    else
        this->data.ats(lens-1)->add(inpu);
    lens++;
}
template <class type>
uint fitp::getl() {
    return lens;
}

