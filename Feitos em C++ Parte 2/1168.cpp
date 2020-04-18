#include<bits/stdc++.h>
using namespace std;
int main() {
	int vezes;
	cin>>vezes;
	for(int i=0; i<vezes;i++){
		char num[1000];
		cin>>num;
		int leds=0,tam = strlen(num);
		for(int j=0;j<tam;j++){
			if(num[j]=='1'){
				leds+=2;
			}
			else if(num[j]=='2'){
				leds+=5;
			}
			else if(num[j]=='3'){
				leds+=5;
			}
			else if(num[j]=='4'){
				leds+=4;
			}
			else if(num[j]=='5'){
				leds+=5;
			}
			else if(num[j]=='6'){
				leds+=6;
			}
			else if(num[j]=='7'){
				leds+=3;
			}
			else if(num[j]=='8'){
				leds+=7;
			}
			else if(num[j]=='9'){
				leds+=6;
			}
			else if(num[j]=='0'){
				leds+=6;
			}
		}
		cout<<leds<<" leds"<<endl;
	}
	return 0;
}
