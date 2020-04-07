#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
    double x1=0,x2=0,y1=0,y2=0,p1=0,p2=0,c1=0,r=0;
    cin>>x1>>y1>>x2>>y2;
    p1=x2-x1;
    p2=y2-y1;
    p1=p1*p1;
    p2=p2*p2;
    c1=p1+p2;
    r=sqrt(c1);
    printf("%.4f\n",r);
    return 0;
}
