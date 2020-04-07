#include <iostream>
using namespace std;
int main(){
    int p,j1,j2,r,a,valor;
    int par,roubou,denunciou;
    cin>>p>>j1>>j2>>r>>a;
    valor=j1+j2;
    if(p==1){
        par=1;
    }
    else if(p==0){
        par=0;
    }
    if(r==1){
        roubou=1;
    }
    else if(r==0){
        roubou=0;
    }
    if(a==1){
        denunciou=1;
    }
    else if(a==0){
        denunciou=0;
    }
    if(roubou==0&&denunciou==0){
        if(valor%2==0){
            if(p==1){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else{
                cout<<"Jogador 2 ganha!"<<endl;
            }
        }
        else{
            if(p==0){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else{
                cout<<"Jogador 2 ganha!"<<endl;
            }
        }
    }
    else if(roubou==1&&denunciou==1){
        cout<<"Jogador 2 ganha!"<<endl;
    }
    else if(roubou==1&&denunciou==0){
        cout<<"Jogador 1 ganha!"<<endl;
    }
    else if(roubou==0&&denunciou==1){
        cout<<"Jogador 1 ganha!"<<endl;
    }
    return 0;
}
