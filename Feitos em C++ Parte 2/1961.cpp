#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b,d=0;
    cin>>a>>b;
    int vet[b];
    for(int x=0;x<b;x++){
        cin>>vet[x];
    }
    for(int x=0;x<b-1;x++){
        int comp=vet[x]-vet[x+1];
        if(comp<0){
            comp*=(-1);
        }
        if(comp<=a){
            d++;
        }
    }
    if(d+1==b){
        cout<<"YOU WIN"<<endl;
    }
    else{
        cout<<"GAME OVER"<<endl;
    }
    return 0;
}
