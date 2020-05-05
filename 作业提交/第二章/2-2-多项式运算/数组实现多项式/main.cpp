#include "dxsa.h"
#include <iostream>
using namespace std;

int main(void)
{
    dxsa   dxs1[16];
    dxsa   dxs2[16];
    cout<<" 请输入第1个多项式项数：";
    cin>>dxs1[0].lens;
    cout<<" 请输入第1个多项式内容：";
    for(int loop=1;loop<=dxs1[0].lens;loop++)
        cin>>dxs1[loop].nums>>dxs1[loop].data;
    cout<<" 请输入第2个多项式项数：";
    cin>>dxs2[0].lens;
    cout<<" 请输入第2个多项式内容：";
    for(int loop=1;loop<=dxs2[0].lens;loop++)
        cin>>dxs2[loop].nums>>dxs2[loop].data;
    cout<<" 两个多项式相加之后是：";
    dxs1->adds(dxs1,dxs2,1);
    cout<<" 两个多项式相减之后是：";
    dxs1->subs(dxs1,dxs2,1);
    cout<<" 两个多项式相乘之后是：";
    dxs1->muls(dxs1,dxs2,1);
}