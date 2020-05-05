#include "fifo.h"
#include <iostream>
using namespace std;

int main(void)
{
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
}