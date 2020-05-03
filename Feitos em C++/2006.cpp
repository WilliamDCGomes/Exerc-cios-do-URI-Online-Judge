#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int cha,vet[5];
    cin>>cha;
    for(int x=0;x<5;x++){
        cin>>vet[x];
    }
    int vezes=0;
    for(int x=0;x<5;x++){
        if(vet[x]==cha){
            vezes++;
        }
    }
    cout<<vezes<<endl;
    return 0;
}
