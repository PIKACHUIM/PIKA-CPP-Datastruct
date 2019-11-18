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
	sysz() {
		xdat = new uint[1]; xdat[0] = 0;
		ydat = new uint[1]; ydat[0] = 0;
		data = new type[1]; 
		lens = 0;
	}
	sysz(uint inpx, uint inpy, type inpu[10][10]) {
		xdat = new uint[inpy * inpx];
		ydat = new uint[inpy * inpx];
		lens = 0;
		data = new type[inpy*inpx];
		for (int y = 0; y < inpy; y++) {
			for (int x = 0; x < inpx; x++)
			{
				if (inpu[y][x] == 0)continue;
				data[lens] = inpu[y][x];
				xdat[lens] = x;
				ydat[lens] = y;
				lens++;
			}
		}
	}
	void tran()
	{
		uint* zdat=new uint[lens];
		for (uint loop = 0; loop < lens; loop++)
		{
			zdat[loop] = xdat[loop];
			xdat[loop] = ydat[loop];
			ydat[loop] = zdat[loop];
		}
	}
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