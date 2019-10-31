//         实现基本链表
// Created by 皮卡丘 on 2019/10/17.
//     任浩龙 2018141461344
#ifndef PIKA_LINK_CPP
#define PIKA_LINK_CPP
#include "link.h"
template <class type>
litp::link()
{
    head= true;
    next= nullptr;
}
template <class type>
litp::link(type inpt)
{
    link();
    this->data=inpt;
}
template <class type>
litp litp::add()
{
    litp*temp=new litp;
    temp->head=false;
    temp->next=this->next;
    this->next=temp;
    return *this;
}
template <class type>
litp litp::add(type inpt)
{
    litp*temp=new litp;
    temp->head=false;
    temp->data=inpt;
    temp->next=this->next;
    this->next=temp;
    return *this;
}
template <class type>

litp litp::add(litp inpt)
{
    litp* temp=new litp;
    temp->next=inpt.next;
    temp->data=inpt.data;
    temp->head=inpt.head;
    temp[inpt.len()-1].next=this->next;
    this->next=temp;
    return *this;
}

template <class type>
void litp::del()
{
    if(this->next== nullptr)return ;
    this->next=this->next->next;
}
template <class type>
type litp::pop()
{
    type temp=this->get();
    this->del();
    return temp;
}
template <class type>
type litp::get()
{
    return this->data;
}

template <class type>
void litp::dlf()
{
    this->next= nullptr;
}

template <class type>
litp litp::operator[](int inpu)
{
    litp*temp=new litp;
         temp->next=this->next;
         temp->data=this->data;
         temp->head=this->head;
    for(int loop=0;loop<inpu;loop++)
    {
        if(temp->next== nullptr)
            {
                std::cout<<"[ERRO]OUT INDEX OF THE LINK"<<std::endl;
                return *temp;
            }
        temp->head=temp->next->head;
        temp->data=temp->next->data;
        temp->next=temp->next->next;
    }
    return *temp;
}
template <class type>
litp* litp::ats(int inpu)
{
    litp*temp=new litp;
    temp->next=this->next;
    temp->data=this->data;
    temp->head=this->head;
    for(int loop=0;loop<inpu;loop++)
    {
        if(temp->next== nullptr)
        {
            std::cout<<"[ERRO]OUT INDEX OF THE LINK"<<std::endl;
            return temp;
        }
        temp->head=temp->next->head;
        temp->data=temp->next->data;
        temp->next=temp->next->next;
    }
    return temp;
}
template <class type>
litp litp::operator =(litp inpu)
{
    this->data=inpu.data;
    this->next=inpu.next;
    this->head=inpu.head;
    return *this;
}

template <class type>
int litp::len() {
    int outp=1;
    litp*temp=new litp;
    temp->next=this->next;
    for(;;outp++)
    {
        if(temp->next== nullptr) break;
        else temp->next=temp->next->next;
    }
    return outp;
}

template <class type>
litp litp::operator +(litp inpu)
{
    litp* temp=new litp;
    temp=this;
    temp->add(inpu);
    return *temp;
}
template <class type>
int litp::fid(type inpt)
{
    int   inde=0;
    litp* temp=new litp;
    temp->data=this->data;
    temp->next=this->next;
    for(;;inde++)
    {
        if(temp->data==inpt)
            return inde;
        if(temp->next== nullptr)return -1;
        temp->data=temp->next->data;
        temp->next=temp->next->next;
    }
}
template <class type>
litp* litp::fin(type inpt)
{
    litp* temp=new litp;
    temp->data=this->data;
    temp->next=this->next;
    for(;temp->next!= nullptr;)
    {
        if(temp->data==inpt)
            return temp;
        temp->next=temp->next->next;
        temp->data=temp->next->data;
    }
    return nullptr;
}
template <class type>
void litp::set(link<type>* inpu) {
    this->next=inpu;
}
#endif