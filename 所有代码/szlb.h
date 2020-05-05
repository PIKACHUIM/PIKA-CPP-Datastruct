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

/*-----------------------DEMO--------------------------
	#include "szlb.h"
	szlb<int>  test(0,0);
	szlb<int>* rank=&test;
	cout << "Ï¡Êè¾ØÕó£º" << endl;
	for (int loop = 1; loop <= 5; loop++)
	{
		for (int temp = 1; temp <= 5; temp++)
		{
			if (loop % 3 == 0 || temp % 4 == 0) {
				cout << loop + temp << " ";
					rank->adds(loop, temp, 1, 0);
				rank->sets(loop + temp);
				rank = rank->xnext;
			}
			else
				cout << 0 << " ";
		}
		cout << endl;

	}
	cout << "--------------------------------" << endl;
	test.show(&test);
-------------------------------------------------------*/