//
// Created by 皮卡丘 on 2019/10/24.
//

#ifndef PIKA_DXSL_H
#define PIKA_DXSL_H
#include "link.cpp"
#define  lids link<dxsb>
class dxsb
{
public:
    float xs; //系数
    float zs; //指数
          dxsb(){};
          dxsb(int ix,int iz){xs=ix;zs=iz;}
    void  sets(int ix,int iz){xs=ix;zs=iz;}
    bool operator ==(dxsb inpt){return this->zs==inpt.zs;}
    void operator = (dxsb inpt){       this->xs =inpt.xs;this->zs=inpt.zs;}
    void operator +=(dxsb inpt){       this->xs =xs+inpt.xs;}
};

class dxsl {
public:
    lids data;
    int  lens;
         dxsl();
         dxsl(dxsb);
    void show();
    dxsl addc(dxsb);
    dxsl adds(dxsl);
    dxsl subs(dxsl);
    void operator = (lids inpt){data=inpt;}
};


#endif //PIKA_DXSL_H
