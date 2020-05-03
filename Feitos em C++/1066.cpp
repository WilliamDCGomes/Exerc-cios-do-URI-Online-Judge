#include <iostream>
using namespace std;
int main(){
    int a[5],cont=0,cont2=0,cont3=0,cont4=0,n;
    for(int b=0;b<5;b++){
        cin>>a[b];
    }
    for(int b=0;b<5;b++){
        if(a[b]>0){
        	cont++;
		}
		if(a[b]<0){
			cont3++;
		}
		n=a[b]%2;
		if(n==0){
			cont2++;
		}
		else{
			cont4++;
		}
    }
    cout<<cont2<<" valor(es) par(es)"<<endl;
    cout<<cont4<<" valor(es) impar(es)"<<endl;
    cout<<cont<<" valor(es) positivo(s)"<<endl;
    cout<<cont3<<" valor(es) negativo(s)"<<endl;
    return 0;
}
