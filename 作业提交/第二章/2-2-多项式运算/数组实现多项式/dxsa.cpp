//      线性表实现多项式运算
// Created by 皮卡丘 on 2019/10/17.
//     任浩龙 2018141461344

#include "dxsa.h"
#include <iostream>
dxsa::dxsa(double danm,int    dada)
{
    nums=danm;
    data=dada;
}
dxsa::dxsa()
{
    nums=0;
    data=0;
}
dxsa* dxsa::adds(dxsa dxs1[],dxsa dxs2[],bool prin)
{
    int    cf[128]={0};
    double xs[128]={0};
    static dxsa* tp=new dxsa[128];
    for(int loop=1;loop<=dxs1[0].lens;loop++)
    {
        cf[0]++;
        xs[loop]=dxs1[loop].nums;
        cf[loop]=dxs1[loop].data;
    }
    for(int loop=1;loop<=dxs2[0].lens;loop++)
    {
        bool flag=1;
        for(int temp=1;temp<=cf[0];temp++)
            if(dxs2[loop].data==cf[temp])
            {
                flag=0;
                xs[temp]+=dxs2[loop].nums;
                break;
            }
        if(flag==1)
        {
            cf[0]++;
            xs[cf[0]]=dxs2[loop].nums;
            cf[cf[0]]=dxs2[loop].data;
        }
    }
    tp[0].lens=cf[0];
    int   zero=0;
    for(int temp=1;temp<=cf[0];temp++)
    {
        if(xs[temp]==0)
        {
            zero++;
            continue;
        }
        else
        {
            tp[temp].data=cf[temp];
            tp[temp].nums=xs[temp];
            if(prin==1)
            {
                if(tp[temp].nums!=0)
                    cout<<xs[temp]<<"X^"<<cf[temp];
                if(temp<cf[0])cout<<"+";
            }
        }
    }
    if(prin==1&&zero==tp[0].lens)cout<<"0";
    if(prin==1)cout<<endl;
    return tp;
}
dxsa* dxsa::subs(dxsa dxs1[],dxsa dxs2[],bool prin)
{
    for(int temp=1;temp<=dxs2[0].lens;temp++)
        dxs2[temp].nums*=-1;
    return this->adds(dxs1,dxs2,1);
}
dxsa* dxsa::muls(dxsa dxs1[],dxsa dxs2[],bool prin)
{
    dxsa *outp=new dxsa[128];
    double xs[128];
    int    cf[128];
    int    cd=0;
    for(int tmp1=1;tmp1<=dxs1[0].lens;tmp1++)
    {
        for(int tmp2=1;tmp2<=dxs2[0].lens;tmp2++)
        {
            xs[0]=dxs1[tmp1].nums*dxs2[tmp2].nums;
            cf[0]=dxs1[tmp1].data+dxs2[tmp2].data;
            int fg=0;
            for(int tmp3=1;tmp3<=cd;tmp3++)
            {
                if(cf[tmp3]==cf[0])
                {
                    xs[tmp3]+=xs[0];
                    fg=1;
                    break;
                }
            }
            if(fg==0)
            {
                cd++;
                cf[cd]=cf[0];
                xs[cd]=xs[0];
            }
        }
    }
    for(int loop=1;loop<=cd;loop++)
    {
        outp[loop].data=cf[loop];
        outp[loop].nums=xs[loop];
        outp[0].lens++;
        cout<<(-1)*xs[loop]<<"X^"<<cf[loop];
        if(loop<cd)cout<<"+";
        else cout<<endl;
    }
    return outp;
}
