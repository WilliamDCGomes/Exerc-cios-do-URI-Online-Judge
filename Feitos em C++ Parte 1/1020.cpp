#include <iostream>
using namespace std;
int main()
{
    int idade=0,mes=0,ano=0,dias=0;
    cin>>idade;
    while (idade>=365){
        idade=idade-365;
        ano=ano+1;
    }
    while (idade>=30){
        idade=idade-30;
        mes=mes+1;
    }
    while(idade>=1){
        idade=idade-1;
        dias=dias+1;
    }
    cout << ano <<" ano(s)"<<endl<<mes<<" mes(es)"<<endl<<dias<<" dia(s)"<< endl;
    return 0;
}
