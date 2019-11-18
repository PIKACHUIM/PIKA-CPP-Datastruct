#include <bits/stdc++>
using namespace std;


int main(void)
{
	int rs;
	double jg;
	cin>> rs >>jg;
	if(rs<50)
	    printf("%.2f",rs*jg);
	else
	    if(rs<100)
            printf("%.2f",rs*jg*0.9);
	    else
            printf("%.2f",rs*jg*0.85);
}
