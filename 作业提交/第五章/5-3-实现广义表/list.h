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
