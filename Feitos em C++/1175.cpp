#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int vetor[20],vetoraux[20],rep=0,dev=0;
    for(rep=0;rep<20;rep++){
        cin>>vetor[rep];
    }
    for(rep=19;rep>=0;rep--){
        vetoraux[rep]=vetor[rep];
        printf("N[%d] = %d\n",dev,vetoraux[rep]);
        dev++;
    }

    return 0;
}
