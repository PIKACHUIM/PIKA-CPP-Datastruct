//
// Created by 皮卡丘 on 2019/11/7.
//

#include "khpp.hpp"
#include<stdio.h>
#include<stack>

bool khpp::matc(char a, char b){
    if(a == '(' && b == ')')
        return true;
    if(a == '[' && b == ']')
        return true;
    if(a == '{' && b == '}')
        return true;
        return false;
}

bool khpp::pdwz(char  data[]) {
     std::stack<char> temp;
    for(int i = 0; data[i] != '\0'; i ++){
        if(data[i] == '(' || data[i] == '[' || data[i] == '{')
            temp.push(data[i]);
        else
        if(!temp.empty() && matc(temp.top(), data[i]))
            temp.pop();
        else
            return false;
    }
    if(temp.empty())
        return true;
    else
        return false;
}
