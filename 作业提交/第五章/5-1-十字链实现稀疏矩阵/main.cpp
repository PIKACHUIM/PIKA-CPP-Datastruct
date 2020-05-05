#include "szlb.h"
#include <iostream>
using namespace std;

int main(void)
{
	szlb<int>  test(0,0);
	szlb<int>* rank=&test;
	cout << "稀疏矩阵：" << endl;
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
}