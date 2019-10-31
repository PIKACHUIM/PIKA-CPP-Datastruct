//      线性表实现多项式运算
// Created by 皮卡丘 on 2019/10/17.
//     任浩龙 2018141461344

#ifndef PIKA_DXSA_HPP
#define PIKA_DXSA_HPP
#include <iostream>
using namespace std;
class dxsa
{
public:
    double nums;  //系数
    int    data;  //幂次
    int    lens;  //总长
    dxsa*  adds(dxsa[],dxsa[],bool);  //多项式相加
    dxsa*  subs(dxsa[],dxsa[],bool);  //多项式相减
    dxsa*  muls(dxsa[],dxsa[],bool);  //多项式相乘
    dxsa   (double,int);
    dxsa   ();
};
#endif

/*-------------------------DEMO-------------------------
	#include "dxsa.cpp"
    dxsa   dxs1[16];
    dxsa   dxs2[16];
    cout<<" 请输入第1个多项式项数：";
    cin>>dxs1[0].lens;
    cout<<" 请输入第1个多项式内容：";
    for(int loop=1;loop<=dxs1[0].lens;loop++)
        cin>>dxs1[loop].nums>>dxs1[loop].data;
    cout<<" 请输入第2个多项式项数：";
    cin>>dxs2[0].lens;
    cout<<" 请输入第2个多项式内容：";
    for(int loop=1;loop<=dxs2[0].lens;loop++)
        cin>>dxs2[loop].nums>>dxs2[loop].data;
    cout<<" 两个多项式相加之后是：";
    dxs1->adds(dxs1,dxs2,1);
    cout<<" 两个多项式相减之后是：";
    dxs1->subs(dxs1,dxs2,1);
    cout<<" 两个多项式相乘之后是：";
    dxs1->muls(dxs1,dxs2,1);
-------------------------DEMO-------------------------*/