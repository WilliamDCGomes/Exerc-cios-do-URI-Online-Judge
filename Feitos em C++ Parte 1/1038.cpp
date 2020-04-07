#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int op,quanti;
    double valor;
    cin>>op>>quanti;
    if (op==1){
        valor=4.00*quanti;
        printf("Total: R$ %0.2f\n",valor);
    }
    if (op==2){
        valor=4.50*quanti;
        printf("Total: R$ %0.2f\n",valor);
    }
    if (op==3){
        valor=5.00*quanti;
        printf("Total: R$ %0.2f\n",valor);
    }
    if (op==4){
        valor=2.00*quanti;
        printf("Total: R$ %0.2f\n",valor);
    }
    if (op==5){
        valor=1.50*quanti;
        printf("Total: R$ %0.2f\n",valor);
    }
    return 0;
}
