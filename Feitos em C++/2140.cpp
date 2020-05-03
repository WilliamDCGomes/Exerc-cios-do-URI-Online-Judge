#include <iostream>
using namespace std;
int main(){
    int num1=1,num2=2;
    while(num1!=0&&num2!=0){
        cin>>num1>>num2;
        if(num1==0&&num2==0){
            break;
        }
        int resu=num2-num1,vezes=0;
        if(resu>=100){
            while(resu>=100){
                resu-=100;
                vezes++;
            }
        }
        if(resu>=50){
            while(resu>=50){
                resu-=50;
                vezes++;
            }
        }
        if(resu>=20){
            while(resu>=20){
                resu-=20;
                vezes++;
            }
        }
        if(resu>=10){
            while(resu>=10){
                resu-=10;
                vezes++;
            }
        }
        if(resu>=5){
            while(resu>=5){
                resu-=5;
                vezes++;
            }
        }
        if(resu>=2){
            while(resu>=2){
                resu-=2;
                vezes++;
            }
        }
        if(vezes==2){
            cout<<"possible"<<endl;
        }
    	else{
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}

