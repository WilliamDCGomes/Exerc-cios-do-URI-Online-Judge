#include <iostream>
using namespace std;
int main(){
    int saida,tempovia,fuso,hora;
    cin>>saida>>tempovia>>fuso;
    if(saida==0){
        saida=24;
    }
    hora=saida+tempovia+fuso;
    if(hora>=24){
        hora-=24;
    }
    cout<<hora<<endl;
    return 0;
}
