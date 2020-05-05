#include "dxsl.h"
#include <iostream>
using namespace std;

int main(void)
{
	dxsb s1,s2;    //新建单项式
	dxsl t1,t2;    //新建多项式
	s1.sets(2,4);  //设置单项值
	s2.sets(3, 5);
	t1.addc(s1 );  //单项式相加
	t1.addc(s2  );
	t1.show();     //显示多项式
	t2.show();
	t1.adds(t1);   //自我项相加
	t2.adds(t1);   //多项式相加
	t1.show();     //显示多项式
	t2.show();
	t2.subs(t1);   //多项式相减
	t1.subs(t1);   //自我项相减
}