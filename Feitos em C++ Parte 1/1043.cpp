#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double a,b,c,ver1,ver11,ver2,ver22,ver3,ver33,perimetro,area;
    cin>>a>>b>>c;
    ver1=b-c;
    ver11=b+c;
    ver2=a-c;
    ver22=a+c;
    ver3=a-b;
    ver33=a+b;
    if(ver1<a&&a<ver11&&ver2<b&&b<ver22&&ver3<c&&c<ver33){
        perimetro=a+b+c;
        printf("Perimetro = %2.1f\n",perimetro);
    }
    else{
        area=(c*(a+b))/2;
        printf("Area = %2.1f\n",area);
    }
    return 0;
}
