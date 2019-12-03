//
// Created by 皮卡丘 on 2019/11/7.
//

#ifndef PIKA_KHPP_HPP
#define PIKA_KHPP_HPP


class khpp {
public:
    bool pdwz(char[]);   //括号验证
    bool matc(char,char);//匹配判定
};


#endif //PIKA_KHPP_HPP
/*--------------DEMO----------------
   #include "khpp.h"
    char expre[] = "{[(())]}";
    khpp test;
    if(test.pdwz(expre))
        printf("success!");
    else
        printf("fail~");
---------------------------------*/