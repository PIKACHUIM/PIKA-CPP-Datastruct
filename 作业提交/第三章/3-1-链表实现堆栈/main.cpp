#include "stac.h"
#include <iostream>
using namespace std;

int main(void)
{
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
}