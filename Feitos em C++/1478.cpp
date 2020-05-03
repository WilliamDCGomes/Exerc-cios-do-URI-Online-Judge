#include <bits/stdc++.h>
using namespace std;
int main(){
    int entr;
    while(true){
        int aumen=1,aux=1;
        cin>>entr;
        int matriz [entr][entr];
        if(entr==0){
            break;
        }
        for(int x=0;x<entr;x++){
            for(int y=0;y<entr;y++){
                matriz[x][y]=aux;
                aux++;
            }
            aux=x+2;
        }
        aux=1;
        while(true){
            int val=1,mant=0;
            if(entr-aumen>0){
                for(int x=aux;x<entr;x++){
                    for(int y=aux;y<entr;y++){
                        matriz[x][y]=val;
                        val++;
                    }
                    val=mant+2;
                    mant++;
                }
                aux++;
                aumen++;
            }
            else{
                break;
            }
        }
        for(int x=0;x<entr;x++){
            for(int y=0;y<entr;y++){
                if(y==0){
                    printf("%3d",matriz[x][y]);
                }
                else if(y==entr-1){
                    printf("%4d\n",matriz[x][y]);
                }
                else{
                    printf("%4d",matriz[x][y]);
                }
                if(entr==1){
                    cout<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
