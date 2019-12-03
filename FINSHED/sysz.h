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



/*---------------------------DEMO------------------------------
#include "sysz.cpp"
int temp[10][10];
	for (int a = 0; a <= 9; a++) {
		for (int b = 0; b <= 9; b++) {
			if (a % 3 == 0 || b % 4 == 0)
				temp[a][b] = a*b%10;
			else
				temp[a][b] = 0;
			cout << temp[a][b] << " ";
		}
		cout << endl;
	}
	cout << endl;
	sysz<int> test(10,10,temp);
	for (uint loop = 0; loop < test.lens; loop++)
		cout << test.ydat[loop] << " "; cout << endl;
	for (uint loop = 0; loop < test.lens; loop++)
		cout << test.xdat[loop] << " "; cout << endl;
	for (uint loop = 0; loop < test.lens; loop++)
		cout << test.data[loop] << " "; cout << endl;
	test.tran();
	for (uint loop = 0; loop < test.lens; loop++)
		cout << test.ydat[loop] << " "; cout << endl;
	for (uint loop = 0; loop < test.lens; loop++)
		cout << test.xdat[loop] << " "; cout << endl;
	for (uint loop = 0; loop < test.lens; loop++)
		cout << test.data[loop] << " "; cout << endl;

	for (int a = 0; a <= 9; a++) {
		for (int b = 0; b <= 9; b++) {
			bool flag = 0;
			for (uint loop = 0; loop < test.lens; loop++)
				if (test.xdat[loop] == b && test.ydat[loop] == a)
				{
					flag = 1;
					cout << test.data[loop] << " ";
					break;
				}
			if (flag==0)
				cout << 0 << " ";
		}
		cout << endl;
	}
*/