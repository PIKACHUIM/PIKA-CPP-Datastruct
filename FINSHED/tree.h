#pragma once
#include<iostream>
#define uint unsigned int
#define trtp tree<type>
template<class type>
class tree
{
public:
	type  data;
	tree* lnex;
	tree* rnex;
	tree();
	tree(type);
	void addc(bool, type);
	void show_fron();
	void show_midd();
	void show_back();
};
/*---------------------DEMO----------------------
	#include"tree.h"
	tree<int>test(0);
	test.addc(0, 5); test.lnex->addc(0, 3); test.lnex->addc(1, 4);
	test.addc(1, 7); test.rnex->addc(0, 2); test.rnex->addc(1, 1);
	cout << "原树：" << endl;
	cout << "   0" << endl << "  5 7" << endl << "3 4 2 1" << endl;
	cout << "--------------------"<<endl;
	cout << "前序："; test.show_fron(); cout << endl;
	cout << "中序："; test.show_midd(); cout << endl;
	cout << "后序："; test.show_back(); cout << endl;
*/