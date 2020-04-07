#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	double salario, aumento,nsalario,porce;
	cin>>salario;
	if(salario>=0.00&&salario<=400.00){
		aumento=salario*0.15;
		nsalario=salario+aumento;
		porce=100*0.15;
	}
	if(salario>=400.01&&salario<=800.00){
		aumento=salario*0.12;
		nsalario=salario+aumento;
		porce=100*0.12;
	}
	if(salario>=800.01&&salario<=1200.00){
		aumento=salario*0.10;
		nsalario=salario+aumento;
		porce=100*0.10;
	}
	if(salario>=1200.01&&salario<=2000.00){
		aumento=salario*0.07;
		nsalario=salario+aumento;
		porce=100*0.07;
	}
	if(salario>2000.00){
		aumento=salario*0.04;
		nsalario=salario+aumento;
		porce=100*0.04;
	}
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",nsalario,aumento,porce);
	return 0;
}
