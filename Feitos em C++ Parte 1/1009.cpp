#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;
int main(){
    string nome;
    double a=0,b=0;
    cin>>nome>>a>>b;
    printf("TOTAL = R$ %.2f\n",a+(b*.15));
    return 0;
}
