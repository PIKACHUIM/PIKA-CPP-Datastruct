#include "szpx.h"

int* szpx::xepx(int* inpu,bool dxxz,uint lens) {
	for (int loop = lens / 2; loop >= 1; loop=loop/2)
		for (int rdat = loop; rdat <= (int)lens - 1; rdat++)
			for (int ldat = rdat - loop; ldat >= 0
				&& ((dxxz&&inpu[ldat] < inpu[rdat])
				 ||(!dxxz&&inpu[ldat] > inpu[rdat]));
				ldat = ldat - loop) {
				int temp = inpu[ldat];
				inpu[ldat] = inpu[ldat + loop];
				inpu[ldat + loop] = temp;
			}
	return inpu;
}

void szpx::kspx(int* inpu,uint dxxz,uint lens) {
	if (dxxz < lens)
	{
		int lop1 = dxxz, lop2 = lens, tmp = inpu[dxxz];
		while (lop1 < lop2)
		{
			while (lop1 < lop2 && inpu[lop2] >= tmp)
				lop2--;
			if (lop1 < lop2)
				inpu[lop1++] = inpu[lop2];

			while (lop1 < lop2 && inpu[lop1] < tmp)
				lop1++;
			if (lop1 < lop2)
				inpu[lop2--] = inpu[lop1];
		}
		inpu[lop1] = tmp;
		kspx(inpu, dxxz, lop1 - 1); // µÝ¹éµ÷ÓÃ 
		kspx(inpu, lop1 + 1, lens);
	}
}