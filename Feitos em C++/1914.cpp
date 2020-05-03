#include <iostream>
using namespace std;
int main(){
    int num,var1,var2,total=0;
    cin>>num;
    string name1,name2,escolha1,escolha2;
    for(int x=0;x<num;x++){
        cin>>name1>>escolha1>>name2>>escolha2>>var1>>var2;
        total=(var1+var2)%2;
        if(total==0&&escolha1=="PAR"){
            cout<<name1<<endl;
        }
        else if(total==1&&escolha1=="IMPAR"){
            cout<<name1<<endl;
        }
        else if(total==0&&escolha2=="PAR"){
            cout<<name2<<endl;
        }
        else if(total==1&&escolha2=="IMPAR"){
            cout<<name2<<endl;
        }
    }
    return 0;
}
