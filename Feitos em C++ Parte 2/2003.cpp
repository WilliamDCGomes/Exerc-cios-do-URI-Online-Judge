#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int hora,minu;
    while(scanf("%d:%d",&hora,&minu)!= EOF){
        int minuaux=(hora*60)+minu+60,minufinal=480;
        if(minufinal>minuaux){
            cout<<"Atraso maximo: 0"<<endl;
        }
        else{
            cout<<"Atraso maximo: "<<minuaux-minufinal<<endl;
        }
    }
    return 0;
}
