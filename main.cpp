#include <iostream>
#include "dxsl.h"
using namespace std;

int main(void)
{
    dxsb s1,s2;
    dxsl t1,t2;
    s1.sets(2,4);
    s2.sets(3,5);
    t1.show();
    t1.addc(s1);
    t2.addc(s2);
    t1.show();
    t1.adds(t2);
    t1.show();
    return 0;
}
