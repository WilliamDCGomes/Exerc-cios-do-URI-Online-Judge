#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int vezes=1,a;
    while(cin>>a){
        if(a==0){
            cout<<"Caso "<<vezes<<": 1 numero\n0"<<endl;
        }
        else{
            int vez=1;
            for(int x=1;x<=a;x++){
                for(int y=0;y<x;y++){
                    vez++;
                }
            }
            if(vez==1){
                cout<<"Caso "<<vezes<<": "<<vez<<" numero\n0 ";
            }
            else{
                cout<<"Caso "<<vezes<<": "<<vez<<" numeros\n0 ";
            }
            for(int x=1;x<=a;x++){
                for(int y=0;y<x;y++){
                    if(x==a&&y+1==x)
                        cout<<x<<endl;
                    else
                        cout<<x<<" ";
                }
            }
        }
        vezes++;
        cout<<"\n";
    }
    return 0;
}
