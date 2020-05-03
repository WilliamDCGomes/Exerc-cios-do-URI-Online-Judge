#include <iostream>
using namespace std;
int main(){
    double a;
    cin>>a;
    if (a>25.00001&&a<=50.0000000){
        cout<<"Intervalo (25,50]"<<endl;
    }
    if(a>=0&&a<=25.0000){
        cout<<"Intervalo [0,25]"<<endl;
    }
    if(a>50.00000001&&a<=75.0000000){
        cout<<"Intervalo (50,75]"<<endl;
    }
    if(a>75.00000001&&a<=100.0000000){
        cout<<"Intervalo (75,100]"<<endl;
    }
    if(a<0||a>100.00000001){
        cout<<"Fora de intervalo"<<endl;
    }
    return 0;
}
