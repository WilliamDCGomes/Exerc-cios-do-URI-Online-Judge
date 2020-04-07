#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int distancia=0;
    double litros=0;
    cin>> distancia;
    cin>>litros;
    printf("%.3f km/l\n",distancia/litros);
    return 0;
}
