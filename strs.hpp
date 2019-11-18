//
// Created by 皮卡丘 on 2019/11/7.
//

#ifndef PIKA_STRS_HPP
#define PIKA_STRS_HPP
#pragma warning(disable:4996)
#include <cstring>
#include <iostream>
#define uint unsigned int
using namespace std;
class strs {
public:
    char*data;
         strs();      //构造空串
         strs(char[]);//构造符类
         strs(string);//构造串类
    void show();      //显示内容
    void dela();      //清空内容
    uint getl();      //获取长度
    void sets(char[]);//设置内容
    void sets(string);//设置内容
    uint kmps(char[]);//子串查找
	uint kmps(string);//子串查找
    int* next(string);//next数组
         strs operator=(strs);                   //赋值
  friend strs operator+(const strs&,const strs&);//加法
};
#endif //PIKA_STRS_HPP
/*-------------------DEMO--------------------
	#include "strs.hpp"
	string a="abababbcaca",
		   b="bcabcaaabbc",
		   c="abc";
	strs s1(a);
	strs s2,s3;
	s2.sets(b);
	s1.show();
	s2.show();
	s3 = s1 + s2;
	s3.show();
	int* n = s2.next(c);
	for (int i = 0; i <= 2; i++)
		cout << n[i]<<endl;
		cout << endl;
		cout << "FIND STR:" << s3.kmps(c);
	return 0;
*/