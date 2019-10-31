//
// Created by 皮卡丘 on 2019/10/24.
//
#ifndef PIKA_DXSL_CPP
#define PIKA_DXSL_CPP
#include "dxsl.h"
dxsl::dxsl() {
    lens=1;
    data.next= nullptr;
    data.head= true;
    data.data.xs=0;
    data.data.zs=0;
}
dxsl::dxsl(dxsb inpu) {
    dxsl();
    data.data=inpu;
}
dxsl dxsl::addc(dxsb inpu) {
    this->data=data[data.len()-1].add(inpu);
    lens++;
    return *this;
}

dxsl dxsl::adds(dxsl inpt) {
    int this_lens=this->data.len();
    int inpt_lens=inpt.data.len();
    for(int loop=1;loop<=inpt_lens;loop++)
    {
        int inde=this->data.fid(inpt.data[loop-1].data);
        if(inde==-1)
        {
            lens++;
            this->addc(inpt.data[loop-1].data);
        }
        else
            this->data[inde].data+=inpt.data[loop-1].data;
    }
    return *this;
}
void dxsl::show() {
    bool flag=true;
    for(int loop=1;loop<=this->data.len();loop++)
    {
        if(data[loop-1].data.xs==0)continue;
        else flag= false;
        std::cout<<data[loop-1].data.xs<<"X^"<<data[loop-1].data.zs;
        if(loop<lens)std::cout<<"+";
    }
    if(flag== true)
        std::cout<<"0";
        std::cout<<std::endl;
}
dxsl dxsl::subs(dxsl inpu) {
    for(int loop=1;loop<=inpu.lens;loop++)
    {
        inpu.data[loop-1].data.sets((-1)*inpu.data[loop-1].data.xs,inpu.data[loop-1].data.zs);
    }

    return *this;
}

#endif