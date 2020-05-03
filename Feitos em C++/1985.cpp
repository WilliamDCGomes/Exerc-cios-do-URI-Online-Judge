#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int casos;
    cin>>casos;
    int cod[casos],quant[casos];
    double soma=0;
    for(int x=0;x<casos;x++){
        cin>>cod[x]>>quant[x];
    }
    for(int x=0;x<casos;x++){
        if(cod[x]==1001){
            soma+=quant[x]*1.5;
        }
        else if(cod[x]==1002){
            soma+=quant[x]*2.5;
        }
        else if(cod[x]==1003){
            soma+=quant[x]*3.5;
        }
        else if(cod[x]==1004){
            soma+=quant[x]*4.5;
        }
        else if(cod[x]==1005){
            soma+=quant[x]*5.5;
        }
    }
    printf("%.2f\n",soma);
    return 0;
}
