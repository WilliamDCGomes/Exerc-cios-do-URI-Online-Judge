#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double nota1=0.0,nota2=0.0,nota3=0.0,nota4=0.0,media=0.0,notaex=0.0;
    cin>>nota1>>nota2>>nota3>>nota4;
    media=(nota1*0.2)+(nota2*0.3)+(nota3*0.4)+(nota4*0.1);
    if(media>=5.0&&media<=6.9){
        cin>>notaex;
    }
    if(media>=7.0){
        printf("Media: %.1f\nAluno aprovado.\n",media);
    }
    else if(media<5.0){
        printf("Media: %.1f\nAluno reprovado.\n",media);
    }
    else if(media>=5.0&&media<=6.9){
        printf("Media: %.1f\nAluno em exame.\n",media);
        printf("Nota do exame: %.1f\n",notaex);
        media=(media+notaex)/2;
        if(media>=5.0){
            printf("Aluno aprovado.\nMedia final: %.1f\n",media);
        }
        else{
            printf("Aluno reprovado.\nMedia final: %.1f\n",media);
        }
    }
    return 0;
}
