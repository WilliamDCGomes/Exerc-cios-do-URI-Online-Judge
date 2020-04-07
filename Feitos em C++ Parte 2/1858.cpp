#include <bits/stdc++.h>
using namespace std;
int main(){
    int ent,aux,pega;
    cin>>ent;
    int vet[ent];
    for(int x=0;x<ent;x++){
        cin>>vet[x];
        if(x==0){
            aux=vet[x];
            pega=x+1;
        }
        else if(aux>vet[x]){
            aux=vet[x];
            pega=x+1;
        }
    }
    cout<<pega<<endl;
    return 0;
}
