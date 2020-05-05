#include "huff.h"
#include <iostream>
#include <vector>
     huff::huff() {
		for (int loop = 0; loop <= 255; loop++) {
			maps[loop] = 0; used[loop] = 0; coun = 1;
	    lens[loop] = 0;
		used[loop] = false;}
	 nums = 0;
	 file = nullptr;
	 }

bool huff::load(char* inpu) {
	file= fopen(inpu, "rb");
	if (inpu == nullptr) {
		std::cout << " [错误]文件无法读取 | " << (void*)file<< " | " << inpu << std::endl;
		return false;
	}
	uchs   temp = fgetc(file);
	while(!feof ( file ) ) {
		this->maps[temp%256]++;
		nums++;
		temp = fgetc(file);}
	//for (int loop = 0; loop <= 255; loop++)std::cout << loop << " " << maps[loop] << "\n";
	    std::cout << " [成功]文件已经载入 | " << (void*)file<< " | "      << inpu << std::endl;
		std::cout << " [成功]扫描文件内容 | " << (void*)maps<< " | S I Z E = " << nums << std::endl;
	return true;
}

void huff::code() {
	uchs t1 = fmin();
	uchs t2 = fmin();
	hutr* tp = new hutr();
	hutr* tl = new hutr();
	hutr* tr = new hutr();
	tp->weig = maps[t1] + maps[t2];
	tl->data = t1; tr->data = t2;
	tl->weig = 0;  tr->weig = 0;
	tl->occp = 1;  tr->occp = 1;
	tp->lnex = tl; tp->rnex = tr;
	hutr* temp=this->gtre(tp);
	this->save = temp;
	std::cout << " [成功]生成哈夫曼树 | " << (void*)save << " | M A X L = " << (int)temp->rnex->data << std::endl;
}

hutr* huff::gtre(hutr* inpu) {
	if (coun == 255) return inpu;
	else {
		this->coun++;
		uchs  next = this->fmin();
		hutr* tk = new hutr();
		tk->data = next;
		tk->weig = 0;
		tk->occp = 1;
		hutr* ts = new hutr();
		if (maps[next] > inpu->weig) {
			ts->lnex = inpu; ts->rnex = tk;}
		else {
			uchs tttp = fmin();
			if (maps[tttp] > inpu->weig) {
				ts->lnex = inpu; ts->rnex = tk;
				used[tttp] = 0;}
			else {
				coun++;
				hutr* tl = new hutr();
				tl->weig = 0;
				tl->occp = 1;
				tl->data = tttp;
				hutr* su = new hutr();
				su->occp = 0;
				su->weig = maps[tttp] + maps[next];
				su->data = 0;
				su->lnex = tl;
				su->rnex = tk;
				ts->lnex = inpu;
				ts->rnex = su;
			}
		}
		ts->weig = maps[next] + inpu->weig;
		ts->occp = 0;
		ts->data = 0;
		this->gtre(ts);
	}
}

uchs huff::fmin() {
	uchs temp = -1; bool flag = 0;
	ulls minn =0xffffffffffffffff;
	for (uchs loop = 0;; loop++) {
		if (used[loop] == false && minn >= maps[loop]) {
			temp = loop; minn = maps[loop]; flag = 1;
		}
		if (loop == 255) {
			if (used[255] == 0 && flag==0)
				return 255;
			else
				break;
		}
	}
	if(temp!=-1)used[temp] = true;
	return temp;
}

void huff::gsha() {
	hutr* temp = this->save;
	vebl  daul;
	uchs  numt = 0;
	this->gatr(temp->rnex, daul, numt,0);
	this->gatr(temp->lnex, daul, numt,1);
}

void huff::gatr(trch* inpu, vebl datp, uchs numt,bool flag) {
	datp.push_back(flag);
	numt++;
	if (inpu->occp == true) {
		lens[inpu->data] = numt;
		data[inpu->data] = datp;
	}
	if (inpu->lnex != nullptr)
		this->gatr(inpu->lnex, datp, numt, 1);
	if (inpu->rnex != nullptr)
		this->gatr(inpu->rnex, datp, numt, 0);
}

void huff::gzip(char* path) {
	rewind(file);
	uchs   temp = fgetc(file);
	vebl   buff;
	while (!feof(file)) {
		vebl::iterator loop = data[temp%256].begin();
		for (;loop!= data[temp % 256].end(); ++loop){
			buff.push_back(*loop);
		}
		temp = fgetc(file);
	}
	ztfs = fopen(path, "wb+");
	uchs wrti;bool rwbl;uchs lenp = 0;
	vebl::iterator loop = buff.begin();
	for (; loop != buff.end(); ) {
		wrti = 0;
		for (lenp = 0; lenp <= 8; lenp++) {
			rwbl=buff.at(*loop);
			wrti += rwbl;
			wrti < 1;
			if (loop == buff.end())
				break;
			++loop;
		}
		putc(wrti, ztfs);
	}
	std::cout << " [成功]写入压缩文件 | " << (void*)ztfs << " | L E N S = " << buff.size() << "\n";
	fclose(ztfs);
}