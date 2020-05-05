#include "list.h"
#include <iostream>
using namespace std;

int main(void)
{
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
}