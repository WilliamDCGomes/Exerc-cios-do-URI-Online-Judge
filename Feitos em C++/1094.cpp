#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int i;
	cin>>i;
	int vet[i],co=0,ra=0,sa=0;
	double perc=0.00,perr=0.00,pers=0.00,total=0.00;
	string animal[i];
	for(int b=0;b<i;b++){
		cin>>vet[b]>>animal[b];
		if(animal[b]=="C"){
			co+=vet[b];
		}
		else if(animal[b]=="R"){
			ra+=vet[b];
		}
		else{
			sa+=vet[b];
		}
		total+=vet[b];
	}
	perc=(100*co)/total;
	perr=(100*ra)/total;
	pers=(100*sa)/total;
	cout<<"Total: "<<total<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<co<<endl;
	cout<<"Total de ratos: "<<ra<<endl;
	cout<<"Total de sapos: "<<sa<<endl;
	printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",perc,perr,pers);
	return 0;
}
