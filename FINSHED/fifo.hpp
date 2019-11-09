//
// Created by 皮卡丘 on 2019/10/31.
//

#ifndef PIKA_FIFO_HPP
#define PIKA_FIFO_HPP

#include "link.cpp"
#define uint unsigned int
#define litp link<type>
#define fitp fifo<type>
template <class type>
class fifo {
public:
    uint lens;      //存储长度
    litp data;      //存储数据
         fifo();    //构造空队
         fifo(type);//带参构造
    void push(type);//入队操作
    type pops();    //出队操作
    uint getl();    //获取长度
};

#endif //PIKA_FIFO_HPP
/*----------------------DEMO----------------------
    #include "fifo.hpp"
    fifo<int>test;
    cout<<endl<<"当前队列长度："<<test.getl()<<endl;
    cout<<"入队元素：";
    for(int loop=1;loop<=10;loop++){
        test.push(loop);cout<<loop<<" ";}
    cout<<endl<<"当前队列长度："<<test.getl()<<endl;
    cout<<"出队元素：";
    for(int loop=1;loop<=10;loop++)
        cout<<test.pops()<<" ";
    cout<<endl<<"当前队列长度："<<test.getl()<<endl;
 ----------------------DEMO----------------------*/