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
    void   adds(type);     //添加数据(按照内容添加本类对象)
	void   adds(pics*);    //添加数据(直接连接其他对象地址)
	void   show(bool,uint);//搜索结构(0深度优先，1广度优先)
	                       //(uint参数标识为当前的搜索次数)
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
	cout << "-----------------\n原始图：\n-----------------\n";
	cout << "    1 - 2 - 3\n    |   |   |\n    4 - 5 - 6\n    |   |   |\n    7 - 8 - 9\n";
	cout <<   "-----------------\n深度优先：\n"; test.show(0, 1);
	cout << "\n-----------------\n广度优先：\n"; test.show(1, 2);
	cout << "\n-----------------\n";
----------------------------------------------------------------*/