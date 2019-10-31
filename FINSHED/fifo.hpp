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
    uint lens;
    litp data;
         fifo();
         fifo(type);
    void push(type);
    type pops();
    uint getl();
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