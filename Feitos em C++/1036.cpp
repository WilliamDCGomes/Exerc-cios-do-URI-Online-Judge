#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
    double a=0,b=0,c=0,delta=0,x1=0,x2=0;
    cin>>a>>b>>c;
    delta=((b*b)-(4*a*c));
    x1=((-b+sqrt(delta))/(2*a));
    x2=((-b-sqrt(delta))/(2*a));
    if(delta<0||a==0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    }
    return 0;
}
