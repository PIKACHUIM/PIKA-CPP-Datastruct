//
// Created by 皮卡丘 on 2019/10/31.
//

#ifndef PIKA_STAC_HPP
#define PIKA_STAC_HPP

#include "link.cpp"
#define uint unsigned int
#define litp link<type>
#define sttp stac<type>
template <class type>
class stac {
public:
    uint lens;
    litp data;
         stac();
         stac(type);
    void push(type);
    type pops();
    uint getl();
};

#endif //PIKA_STAC_HPP
/*----------------------DEMO----------------------
    #include "stac.hpp"
    stac<int>test;
    cout<<endl<<"当前队列长度："<<test.getl()<<endl;
    cout<<"入栈元素：";
    for(int loop=1;loop<=10;loop++){
        test.push(loop);cout<<loop<<" ";}
    cout<<endl<<"当前队列长度："<<test.getl()<<endl;
    cout<<"出栈元素：";
    for(int loop=1;loop<=10;loop++)
        cout<<test.pops()<<" ";
    cout<<endl<<"当前队列长度："<<test.getl()<<endl;
 ----------------------DEMO----------------------*/