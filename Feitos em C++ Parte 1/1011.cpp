#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    double a=0;
    cin>>a;
    a=a*a*a;
    printf("VOLUME = %.3f\n",((4.0/3)*3.14159)*a);
    return 0;
}
