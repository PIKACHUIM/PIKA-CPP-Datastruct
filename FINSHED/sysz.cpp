#include "sysz.h"
template<class type>
sysz<type>::sysz() {
	xdat = new uint[1]; xdat[0] = 0;
	ydat = new uint[1]; ydat[0] = 0;
	data = new type[1];
	lens = 0;
}
template<class type>
sysz<type>::sysz(uint inpx, uint inpy, type inpu[10][10]) {
	xdat = new uint[inpy * inpx];
	ydat = new uint[inpy * inpx];
	lens = 0;
	data = new type[inpy * inpx];
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
template<class type>
void sysz<type>::tran()
{
	uint* zdat = new uint[lens];
	for (uint loop = 0; loop < lens; loop++)
	{
		zdat[loop] = xdat[loop];
		xdat[loop] = ydat[loop];
		ydat[loop] = zdat[loop];
	}
}