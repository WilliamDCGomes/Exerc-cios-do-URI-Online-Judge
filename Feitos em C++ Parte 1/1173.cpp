#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int vetor[10],n=0,vetoraux[10],aux=0,m=1;
    cin>>vetor[n];
    for(n=0;n<9;n++){
        vetoraux[n]=0;
    }
    n=0;
    vetoraux[n]=vetor[n];
    for(n=1;n<10;n++){
        aux=0;
        aux=vetoraux[n-1]*2;
        vetoraux[n]=aux;
    }
    for(n=0;n<10;n++){
        printf("N[%d] = %d\n",n,vetoraux[n]);
    }
    return 0;
}
