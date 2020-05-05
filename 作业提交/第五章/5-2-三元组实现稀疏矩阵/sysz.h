//三元组实现稀疏矩阵
#pragma once
#define uint unsigned int
template<class type>
class sysz
{
public:
	uint* xdat;
	uint* ydat;
	uint  lens;
	type* data;
	sysz();
	sysz(uint,uint,type[10][10]);
	void tran();
};
