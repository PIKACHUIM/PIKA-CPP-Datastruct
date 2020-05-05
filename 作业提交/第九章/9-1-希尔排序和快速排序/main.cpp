#include <iostream>
#include "szpx.h"
using namespace std;

int main(void)
{
	int dat[100];
	for (int tmp = 0; tmp <= 99; tmp++)
		dat[tmp] = tmp;
	szpx test;
	test.xepx(dat,1, 100);
	for (int tmp = 0; tmp <= 99; tmp++)
		cout << dat[tmp] << " ";
	for (int tmp = 0; tmp <= 99; tmp++)
		dat[tmp] = tmp;
	test.kspx(dat, 1, 100);
}
