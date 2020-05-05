#include "link.h"
#include <iostream>
using namespace std;

int main(void)
{
    link<int>a;            //无值创建
    link<int>b(1);         //有值创建
    a=b;                   //重载等号
    cout<<a.get()<<endl;   //获取内容
    a.add(2);              //追加内容
    cout<<a[1].data<<endl; //显示内容
    a.next->add(3);        //再次添加
    cout<<a[2].data<<endl; //显示内容
    cout<<a.len()<<endl;   //显示长度
    a=a+b;                 //重载加号
    cout<<a.len()<<endl;   //输出长度
    cout<<a.fid(3)<<endl;  //查找数据
    cout<<a.fin(3)<<endl;  //查找地址
    cout<<a.fin(3)->data;  //查找数据
    cout<<a.fin(3)<<endl;  //查找数据
}