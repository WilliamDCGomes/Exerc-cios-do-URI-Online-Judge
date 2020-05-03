#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n=0;
    double vetor[100];
    for(n=0;n<100;n++){
        cin>>vetor[n];
    }
    for(n=0;n<100;n++){
        if(vetor[n]<=10){
            printf("A[%d] = %.1f\n",n,vetor[n]);
        }
    }
    return 0;
}
