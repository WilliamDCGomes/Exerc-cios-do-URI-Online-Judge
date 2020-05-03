#include <iostream>
using namespace std;
int main(){
    int vez;
    cin>>vez;
    string joga[vez],jogb[vez];
    for(int x=0;x<vez;x++){
        cin>>joga[x]>>jogb[x];
        if(joga[x]=="ataque"&&jogb[x]=="pedra"){
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(jogb[x]=="ataque"&&joga[x]=="pedra"){
            cout<<"Jogador 2 venceu"<<endl;
        }
        else if(joga[x]=="pedra"&&jogb[x]=="papel"){
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(jogb[x]=="pedra"&&joga[x]=="papel"){
            cout<<"Jogador 2 venceu"<<endl;
        }
        else if(joga[x]=="papel"&&jogb[x]=="ataque"){
            cout<<"Jogador 2 venceu"<<endl;
        }
        else if(jogb[x]=="papel"&&joga[x]=="ataque"){
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(joga[x]=="papel"&&jogb[x]=="papel"){
            cout<<"Ambos venceram"<<endl;
        }
        else if(joga[x]=="pedra"&&jogb[x]=="pedra"){
            cout<<"Sem ganhador"<<endl;
        }
        else if(joga[x]=="ataque"&&jogb[x]=="ataque"){
            cout<<"Aniquilacao mutua"<<endl;
        }
    }
    return 0;
}
