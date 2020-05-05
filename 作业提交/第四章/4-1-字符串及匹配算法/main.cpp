#include "strs.h"
#include <iostream>
using namespace std;

int main(void)
{
	string a="abababbcaca",
		   b="bcabcaaabbc",
		   c="abc";
	strs s1(a);
	strs s2,s3;
	s2.sets(b);
	s1.show();
	s2.show();
	s3 = s1 + s2;
	s3.show();
	int* n = s2.next(c);
	for (int i = 0; i <= 2; i++)
		cout << n[i]<<endl;
		cout << endl;
		cout << "FIND STR:" << s3.kmps(c);
	return 0;
}