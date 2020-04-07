#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i;
    while(cin>>i){
        int mat[i],vez=0,esse=0,pri=0;
        for(int x=0;x<i;x++){
            cin>>mat[x];
            if(pri==0){
                esse=mat[x];
                pri++;
            }
            else if(esse<mat[x]){
                esse=mat[x];
            }
        }
        vez++;
        if(esse<10){
            cout<<"1"<<endl;
        }
        else if(esse>=10&&esse<20){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
    return 0;
}
