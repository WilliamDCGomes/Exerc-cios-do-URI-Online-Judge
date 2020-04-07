#include <iostream>
using namespace std;
int main(){
    int valor1,valor2,valor3;
    cin>>valor1>>valor2>>valor3;
    if(valor1>valor2&&valor1>valor3){
        if(valor2>valor3){
            cout<<valor3<<"\n"<<valor2<<"\n"<<valor1<<"\n"<<endl;
            cout<<valor1<<"\n"<<valor2<<"\n"<<valor3<<endl;
        }
        if(valor3>valor2){
            cout<<valor2<<"\n"<<valor3<<"\n"<<valor1<<"\n"<<endl;
            cout<<valor1<<"\n"<<valor2<<"\n"<<valor3<<endl;
        }
    }
    if(valor2>valor3&&valor2>valor1){
        if(valor1>valor3){
            cout<<valor3<<"\n"<<valor1<<"\n"<<valor2<<"\n"<<endl;
            cout<<valor1<<"\n"<<valor2<<"\n"<<valor3<<endl;
            }
        if(valor3>valor1){
            cout<<valor1<<"\n"<<valor3<<"\n"<<valor2<<"\n"<<endl;
            cout<<valor1<<"\n"<<valor2<<"\n"<<valor3<<endl;
        }
    }
    if(valor3>valor2&&valor3>valor1){
        if(valor2>valor1){
            cout<<valor1<<"\n"<<valor2<<"\n"<<valor3<<"\n"<<endl;
            cout<<valor1<<"\n"<<valor2<<"\n"<<valor3<<endl;
        }
        if(valor1>valor2){
            cout<<valor2<<"\n"<<valor1<<"\n"<<valor3<<"\n"<<endl;
            cout<<valor1<<"\n"<<valor2<<"\n"<<valor3<<endl;
        }
    }
    return 0;
}
