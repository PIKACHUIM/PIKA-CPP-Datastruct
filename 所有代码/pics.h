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

/*-----------------------DEMO------------------------------
    #include "pics.cpp"
	pics<int>test(1);
	test.adds(2);
	test.next[1]->adds(3);
	test.adds(4);
	test.next[2]->adds(5);
	test.next[2]->next[1]->adds(6);
	test.next[2]->adds(7);
	test.next[2]->next[2]->adds(8);
	test.next[2]->next[2]->next[1]->adds(9);
	test.next[1]->adds(test.next[2]->next[1]);
	test.next[1]->next[1]->adds(test.next[2]->next[1]->next[1]);
	test.next[2]->next[1]->adds(test.next[2]->next[2]->next[1]);
	test.next[2]->next[1]->next[1]->adds(test.next[2]->next[2]->next[1]->next[1]);
	cout << "-----------------\nԭʼͼ��\n-----------------\n";
	cout << "    1 - 2 - 3\n    |   |   |\n    4 - 5 - 6\n    |   |   |\n    7 - 8 - 9\n";
	cout <<   "-----------------\n������ȣ�\n"; test.show(0, 1);
	cout << "\n-----------------\n������ȣ�\n"; test.show(1, 2);
	cout << "\n-----------------\n";
----------------------------------------------------------------*/