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

	ulls weig;                  //��ǰ�ڵ�Ȩ��
	hutr() {
		occp = weig = data = 0;
		lnex = rnex = nullptr;
	}
};

class huff
{
public:
	      huff();     //��ʼ���캯��
	FILE* file;       //�洢�ļ�ָ��
	FILE* ztfs;       //�洢д���ļ�
	hutr* save;       //�洢��������
	ulls  nums;       //��¼�ַ�����
	uchs  coun;       //��¼ͳ�ƴ���
	ulls  maps[256];  //��¼ÿ�ָ���
	uchs  lens[256];  //��¼���볤��
	vebl  data[256];  //��¼��Ӧ����
	bool  used[256];  //���ʹ�����
	bool  load(char*);//ͳ��ÿ�ָ���
	void  code();     //���ɹ�������
	uchs  fmin();     //ͳ����С�ַ�
	hutr* gtre(hutr*);//�ݹ��������
	void  gsha();     //�����ٲ����
	void  gatr(trch*, //�ݹ��������
	vebl, uchs,bool);
	void  gzip(char*);//ִ��ѹ������
};

