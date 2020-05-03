#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    double vet[a];
    int insc[a],vezes=0;
    for(int x=0;x<a;x++){
        cin>>insc[x]>>vet[x];
        if(vet[x]>=8.0){
            vezes++;
        }
    }
    double valores[vezes];
    int i[vezes],z=0;
    for(int x=0;x<a;x++){
        if(vet[x]>=8.0){
            valores[z]=vet[x];
            i[z]=insc[x];
            z++;
        }
    }
    if(vezes==0){
        cout<<"Minimum note not reached"<<endl;
    }
    else{
        int maior;
        if(vezes==1){
            maior=i[0];
        }
        else{
            double comp=valores[0];
            maior=i[0];
            for(int x=1;x<vezes;x++){
                if(comp>valores[x]){
                    continue;
                }
                else{
                    maior=i[x];
                    comp=valores[x];
                }
            }
        }
        cout<<maior<<endl;
    }
    return 0;
}
