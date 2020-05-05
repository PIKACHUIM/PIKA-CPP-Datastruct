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