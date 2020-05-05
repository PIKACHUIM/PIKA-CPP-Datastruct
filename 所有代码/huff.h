#pragma once
#include <cstdio>
#include <iostream>
#include <vector>
#include "tree.cpp"
#pragma warning(disable:4996)
#define ulls unsigned long long
#define uchs unsigned char
#define uint unsigned int
#define trch tree<uchs>
#define vebl std::vector<bool>
class hutr :public tree<uchs> {
public:

	ulls weig;                  //当前节点权重
	hutr() {
		occp = weig = data = 0;
		lnex = rnex = nullptr;
	}
};

class huff
{
public:
	      huff();     //初始构造函数
	FILE* file;       //存储文件指针
	FILE* ztfs;       //存储写入文件
	hutr* save;       //存储哈夫曼树
	ulls  nums;       //记录字符数量
	uchs  coun;       //记录统计次数
	ulls  maps[256];  //记录每种概率
	uchs  lens[256];  //记录编码长度
	vebl  data[256];  //记录对应编码
	bool  used[256];  //标记使用情况
	bool  load(char*);//统计每种概率
	void  code();     //生成哈夫曼码
	uchs  fmin();     //统计最小字符
	hutr* gtre(hutr*);//递归哈夫曼树
	void  gsha();     //生成速查编码
	void  gatr(trch*, //递归遍历生成
	vebl, uchs,bool);
	void  gzip(char*);//执行压缩操作
};

