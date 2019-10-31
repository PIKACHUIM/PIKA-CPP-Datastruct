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
          dxsb(float ix, float iz){xs =ix;zs=iz;}
	dxsb  sets(float ix, float iz) {xs = ix;zs = iz;return *this;}
	dxsb  sets(dxsb inpu ){xs = inpu.xs;zs = inpu.zs;return *this;}
	void  addp(float   ip){xs += ip;}
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
	void sets(dxsb);
    void operator = (lids inpt){data=inpt;}
};


#endif //PIKA_DXSL_H

/*----------------DEMO------------------
	dxsb s1,s2;    //新建单项式
	dxsl t1,t2;    //新建多项式
	s1.sets(2,4);  //设置单项值
	s2.sets(3, 5);
	t1.addc(s1 );  //单项式相加
	t1.addc(s2  );
	t1.show();     //显示多项式
	t2.show();
	t1.adds(t1);   //自我项相加
	t2.adds(t1);   //多项式相加
	t1.show();     //显示多项式
	t2.show();
	t2.subs(t1);   //多项式相减
	t1.subs(t1);   //自我项相减
--------------------------------------*/