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
	 int kmps(string);//子串查找
    int* next(string);//next数组
         strs operator=(strs);                   //赋值
  friend strs operator+(const strs&,const strs&);//加法
};
#endif //PIKA_STRS_HPP
