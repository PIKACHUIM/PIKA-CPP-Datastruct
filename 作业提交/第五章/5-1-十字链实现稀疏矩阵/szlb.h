#pragma once
#define uint unsigned int
#define sztp szlb<type>
template<class type>
class szlb
{
public:
	uint  xinde;
	uint  yinde;
	bool  occpy;
	type  datas;
	szlb* xnext;
	szlb* ynext;
	szlb      (uint,uint);
    void  sets(type );
	void  adds(uint,uint,uint,uint);
	void  show();
	void  show(szlb*);
};
