#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double matriz[12][12],soma=0.0,media=0.0,vezes=0.0;
    char var;
    cin>>var;
    for(int x=0;x<12;x++){
        for(int y=0;y<12;y++){
            cin>>matriz[x][y];
        }
    }
    for(int x=0;x<12;x++){
        for(int y=0;y<12;y++){
            if(y<x){
                soma+=matriz[x][y];
                vezes++;
            }
        }
    }
    if(var=='M'){
        media=soma/vezes;
        printf("%.1f\n",media);
    }
    else{
        printf("%.1f\n",soma);
    }
    return 0;
}
