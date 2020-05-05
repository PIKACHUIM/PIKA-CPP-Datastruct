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
