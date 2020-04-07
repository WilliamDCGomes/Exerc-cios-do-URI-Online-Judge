#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double matriz[12][12],soma=0.0,media=0.0,vezes=0.0;
    char var;
    cin>>var;
    for(int x=0;x<12;x++){
        for(int y=0;y<12;y++){
            cin>>matriz[x][y];
        }
    }
    for(int x=0;x<12;x++){
        for(int y=0;y<12;y++){
            if((x==1&&y==11)||(x==2&&y>9)||(x==3&&y>8)||(x==4&&y>7)||(x==5&&y>6)||(x==6&&y>5)||(x==7&&y>4)||(x==8&&y>3)||(x==9&&y>2)||(x==10&&y>1)||(x==11&&y>0)){
                soma+=matriz[x][y];
                vezes++;
            }
        }
    }
    if(var=='M'){
        media=soma/vezes;
        printf("%.1f\n",media);
    }
    else{
        printf("%.1f\n",soma);
    }
    return 0;
}
