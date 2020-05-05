#include "khpp.h"
#include <iostream>
using namespace std;

int main(void)
{
    char expre[] = "{[(())]}";
    khpp test;
    if(test.pdwz(expre))
        printf("success!");
    else
        printf("fail~");
}