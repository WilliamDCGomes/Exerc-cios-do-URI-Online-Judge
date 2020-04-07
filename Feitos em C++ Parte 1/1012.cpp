#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double a=0,b=0,c=0,areat=0,areac=0,areatrapezio=0,areaq=0,arearetangulo=0;
    cin>>a>>b>>c;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",(a*c)/2,3.14159*c*c,((a+b)*c)/2,b*b,a*b);
    return 0;
}
