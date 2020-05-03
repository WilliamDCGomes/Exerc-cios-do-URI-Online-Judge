#include <iostream>
using namespace std;
int main(){
    double valor1,valor2,valor3,a,b,c;
    cin>>valor1>>valor2>>valor3;
    if(valor1>valor2&&valor1>valor3){
        if(valor2>valor3){
            a=valor1;
            b=valor2;
            c=valor3;
        }
        if(valor3>valor2){
            a=valor1;
            b=valor3;
            c=valor2;
        }
        if(valor2==valor3){
        	a=valor1;
        	b=valor2;
        	c=valor3;
		}
    }
    if(valor2>valor3&&valor2>valor1){
        if(valor1>valor3){
            a=valor2;
            b=valor1;
            c=valor3;
            }
        if(valor3>valor1){
            a=valor2;
            b=valor3;
            c=valor1;
        }
        if(valor1==valor3){
        	a=valor2;
        	b=valor1;
        	c=valor3;
		}
    }
    if(valor3>valor2&&valor3>valor1){
        if(valor2>valor1){
            a=valor3;
            b=valor2;
            c=valor1;
        }
        if(valor1>valor2){
            a=valor3;
            b=valor1;
            c=valor2;       
		 }
		if(valor2==valor1){
        	a=valor3;
        	b=valor2;
        	c=valor1;
		}
    }
    if(valor1==valor2&&valor1>valor3){
   		a=valor1;
   		b=valor2;
   		c=valor3;
    }
    if(valor1==valor3&&valor1>valor2){
   		a=valor1;
   		b=valor3;
   		c=valor2;
    }
    if(valor3==valor2&&valor2>valor1){
   		a=valor3;
   		b=valor2;
   		c=valor1;
    }
    if(valor1==valor2&&valor2==valor3){
		a=valor1;
		b=valor2;
		c=valor3;
	}
    if(a>=(b+c)){
    	cout<<"NAO FORMA TRIANGULO"<<endl;
	}
	else{
		if((a*a)==((b*b)+(c*c))){
	    	cout<<"TRIANGULO RETANGULO"<<endl;
		}
		if((a*a)>((b*b)+(c*c))){
	    	cout<<"TRIANGULO OBTUSANGULO"<<endl;
		}
		if((a*a)<((b*b)+(c*c))){
	    	cout<<"TRIANGULO ACUTANGULO"<<endl;
		}
		if(a==b&&b==c){
	    	cout<<"TRIANGULO EQUILATERO"<<endl;
		}
		else if(a==b){
	    	cout<<"TRIANGULO ISOSCELES"<<endl;
		}
		else if(b==c){
	    	cout<<"TRIANGULO ISOSCELES"<<endl;
		}
		else if(c==a){
	    	cout<<"TRIANGULO ISOSCELES"<<endl;
		}
	}
    return 0;
}
