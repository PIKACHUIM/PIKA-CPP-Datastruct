#pragma once
#define uint unsigned int
class list
{
public:
	void* data[1024];
	uint  lens;
	      list();
	      list(void*);
	void  appe(void*);
	void* poph();
	uint  glen();
};

/*---------------------------DEMO---------------------------
	#include "list.h"
	list   test;
	uint   dat1 = 1234;
	char   dat2 = 'a';
	string dat3 = "pikapika";
	cout << "当前列表长度："<<test.glen()<<endl;
	test.appe((void*)dat1);
	test.appe((void*)dat2);
	test.appe((void*)dat3.c_str());
	cout << "当前列表长度：" << test.glen() << endl;
	cout << (int  )test.data[0] << endl
	     << (char )test.data[1] << endl 
		 << (char*)test.data[2];
----------------------------------------------------------*/