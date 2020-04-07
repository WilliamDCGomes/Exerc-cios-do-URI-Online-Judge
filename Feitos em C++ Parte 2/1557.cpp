#include <bits/stdc++.h>
using namespace std;
int main(){
    int entr;
    while(true){
        int aux=1,cont=1,nDigits=1,temp,maior;
        cin>>entr;
        int matriz [entr][entr];
        if(entr==0){
            break;
        }
        for(int x=0;x<entr;x++){
            if(x>0){
                aux=cont*2;
                cont*=2;
            }
            for(int y=0;y<entr;y++){
                matriz[x][y]=aux;
                aux*=2;
                if(x==0&&y==0){
                    maior=matriz[0][0];
                }
                else if(maior<matriz[x][y]){
                    maior=matriz[x][y];
                }
            }
        }
        while(maior>0){
            temp=maior/10;
            maior=temp;
            nDigits++;
        }
        for(int x=0;x<entr;x++){
            for(int y=0;y<entr;y++){
                if(y==0){
                    printf("%*d",nDigits-1,matriz[x][y]);
                }
                else if(y==entr-1){
                    printf("%*d\n",nDigits,matriz[x][y]);
                }
                else{
                    printf("%*d",nDigits,matriz[x][y]);
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
