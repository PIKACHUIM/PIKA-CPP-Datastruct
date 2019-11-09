#include <iostream>
using namespace std;

#include "strs.hpp"
int main(void)
{
    string a="3344";
    strs temp(a);
    strs tttp(a);
    temp.show();
    temp=temp+tttp;
    temp.show();
    return 0;
}
