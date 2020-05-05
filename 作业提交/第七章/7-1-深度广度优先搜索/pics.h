#pragma once
#define uint unsigned int
#define pitp pics<type> 
#define maxl 128
#include<iostream>
template <class type>
class pics
{
public:
	uint   lens;
	uint   nums;
	type   data;
	pics*  next[maxl];
	       pics();
		   pics(type);
    void   adds(type);     //添加数据(按照内容添加本类对象)
	void   adds(pics*);    //添加数据(直接连接其他对象地址)
	void   show(bool,uint);//搜索结构(0深度优先，1广度优先)
	                       //(uint参数标识为当前的搜索次数)
};