#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    double valorini,valorfini;
    cin>>valorini>>valorfini;
    double porc=((valorfini-valorini)/valorini)*100;
    printf("%.2f%%\n",porc);
    return 0;
}
