#pragma once
#define uint unsigned int
#define pitp pics<type> 
#define maxl 128
#include<iostream>
template <class type>
class pics
{
public:
	uint   lens;
	uint   nums;
	type   data;
	pics*  next[maxl];
	       pics();
		   pics(type);
    void   adds(type);     //�������(����������ӱ������)
	void   adds(pics*);    //�������(ֱ���������������ַ)
	void   show(bool,uint);//�����ṹ(0������ȣ�1�������)
	                       //(uint������ʶΪ��ǰ����������)
};