#include <iostream>
using namespace std;
int main(){
        int a;
        cin>>a;
        int vet[a];
        int cont2=0,cont3=0,cont4=0,cont5=0;
        for(int x=0;x<a;x++){
            cin>>vet[x];
        }
        for(int x=0;x<a;x++){
            if(vet[x]%2==0){
                cont2++;
            }
            if(vet[x]%3==0){
                cont3++;
            }
            if(vet[x]%4==0){
                cont4++;
            }
            if(vet[x]%5==0){
                cont5++;
            }
        }
        cout<<cont2<<" Multiplo(s) de 2"<<endl;
        cout<<cont3<<" Multiplo(s) de 3"<<endl;
        cout<<cont4<<" Multiplo(s) de 4"<<endl;
        cout<<cont5<<" Multiplo(s) de 5"<<endl;
    return 0;
}

