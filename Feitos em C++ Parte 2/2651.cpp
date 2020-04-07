#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont=0,x=0;
    char z[1000000];
    cin>>z;
    while(z[x]!='\0'){
        if(z[x]=='z'||z[x]=='Z'){
            if(z[x+1]=='e'||z[x+1]=='E'){
                if(z[x+2]=='l'||z[x+2]=='L'){
                    if(z[x+3]=='d'||z[x+3]=='D'){
                        if(z[x+4]=='a'||z[x+4]=='A'){
                            cont++;
                        }
                    }
                }
            }
        }
        x++;
    }
    if(cont!=0){
        cout<<"Link Bolado"<<endl;
    }
    else{
        cout<<"Link Tranquilo"<<endl;
    }
    return 0;
}
