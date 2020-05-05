//
// Created by 皮卡丘 on 2019/10/31.
//
#include "stac.h"
template <class type>
sttp::stac() {
    lens=0;
}
template <class type>
sttp::stac(type inpu) {
lens=1;
data.data= inpu;
data.head= true;
data.next= nullptr;
}
template <class type>
type sttp::pops() {
    if(lens<=0){
        std::cout<<"[WARN]TRY DELING AN EMP FIFO"<<std::endl;
        lens=0;throw (-1);}
    lens--;
    if(this->data.next== nullptr)
        return this->data.data;
    else
    {
        type temp=this->data[this->data.len()-1].data;
        this->data.ats(this->data.len()-2)->next= nullptr;
        return temp;
    }
}
template <class type>
void sttp::push(type inpu) {
    if(lens==0)
        this->data=inpu;
    else
        this->data.ats(lens-1)->add(inpu);
    lens++;
    this->data.ats(lens-1)->next= nullptr;
}
template <class type>
uint sttp::getl() {
    return lens;
}

