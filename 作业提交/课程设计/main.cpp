#include <iostream>
#include "huff.h"
using namespace std;

int main(void)
{
	huff test;
	test.load((char*)"E:\\~CPP\\PIKA-CPP-Datastruct\\1.bmp");
	test.code();
	test.gsha();
	test.gzip((char*)"E:\\~CPP\\PIKA-CPP-Datastruct\\1.bmp.phz");
}
