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
void dxsl::sets(dxsb inpt) {
	this->data[0].data = inpt;
}
dxsl dxsl::adds(dxsl inpt) {
    int this_lens=this->data.len()-1;
    int inpt_lens=inpt.data.len()-1;
    for(int loop=1;loop<=inpt_lens;loop++)
    {
        int inde=this->data.fid(inpt.data[loop-1].data);
        if(inde==-1)
        {
            this->addc(inpt.data[loop-1].data);
        }
		else
		{
			dxsb* writ = new dxsb();
			writ->xs = inpt.data[loop - 1].data.xs;
			writ->zs = inpt.data[loop - 1].data.xs;
			if (this->data.ats(inde - 1)->next == nullptr) continue;
			this->data.ats(inde-1)->next->data.xs+=writ->xs;
		}
    }
    return *this;
}
void dxsl::show() {
    bool flag=true;
    for(int loop=1;loop<=this->data.len();loop++)
    {
        if(data[loop-1].data.xs==0)continue;
        else flag= false;
		std::cout << data[loop - 1].data.xs;
		if(data[loop - 1].data.zs !=0)
			std::cout<< "X^" << data[loop - 1].data.zs;
        if(loop<lens-1)
			std::cout<<"+";
    }
    if(flag== true)
        std::cout<<"0";
        std::cout<<std::endl;
}
dxsl dxsl::subs(dxsl inpu) {
    for(int loop=1;loop<=inpu.lens-1;loop++)
    {
        inpu.data.ats(loop-1)->data.sets((-1)*inpu.data.ats(loop - 1)->data.xs,inpu.data.ats(loop - 1)->data.zs);
    }
	this->adds(inpu);
	this->lens--;
    return *this;
}

#endif