#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a=0,b=0,c=1,cont=1;
	for(int cinco=0;cinco<10;cinco++){
		for(int vez=0;vez<3;vez++){
			if(cont<4||(cont>15&&cont<19)||cont>30){
				cout<<"I="<<a<<" J="<<c<<endl;
			}
			else{
				cout<<"I="<<a<<"."<<b<<" J="<<c<<"."<<b<<endl;
			}
			c++;
			cont++;
		}
		b+=2;
		for(int vez=0;vez<3;vez++){
			c--;
		}
		if(b==10){
			b=0;
			c++;
			a++;
		}
	}
	for(int vez=0;vez<3;vez++){
		if(cont<4||(cont>15&&cont<19)||cont>30)	{
			cout<<"I="<<a<<" J="<<c<<endl;
		}
		else{
			cout<<"I="<<a<<"."<<b<<" J="<<c<<"."<<b<<endl;
		}
		c++;
		cont++;
	}
    return 0;
}
