#include<bits/stdc++.h>
using namespace std;
int main() {
	int month,day;
	while(cin>>month>>day){
		if(month==12&&day==25){
			cout<<"E natal!"<<endl;
		}
		else if(month==12&&day==24){
			cout<<"E vespera de natal!"<<endl;
		}
		else if(month==12&&day>25){
			cout<<"Ja passou!"<<endl;
		}
		else{
			if(month==12){
				cout<<"Faltam "<<25-day<<" dias para o natal!"<<endl;
			}
			else if(month==11){
				cout<<"Faltam "<<25+30-day<<" dias para o natal!"<<endl;
			}
			else if(month==10){
				cout<<"Faltam "<<25+30+31-day<<" dias para o natal!"<<endl;
			}
			else if(month==9){
				cout<<"Faltam "<<25+30+31+30-day<<" dias para o natal!"<<endl;
			}
			else if(month==8){
				cout<<"Faltam "<<25+30+31+30+31-day<<" dias para o natal!"<<endl;
			}
			else if(month==7){
				cout<<"Faltam "<<25+30+31+30+31+31-day<<" dias para o natal!"<<endl;
			}
			else if(month==6){
				cout<<"Faltam "<<25+30+31+30+31+31+30-day<<" dias para o natal!"<<endl;
			}
			else if(month==5){
				cout<<"Faltam "<<25+30+31+30+31+31+30+31-day<<" dias para o natal!"<<endl;
			}
			else if(month==4){
				cout<<"Faltam "<<25+30+31+30+31+31+30+31+30-day<<" dias para o natal!"<<endl;
			}
			else if(month==3){
				cout<<"Faltam "<<25+30+31+30+31+31+30+31+30+31-day<<" dias para o natal!"<<endl;
			}
			else if(month==2){
				cout<<"Faltam "<<25+30+31+30+31+31+30+31+30+31+29-day<<" dias para o natal!"<<endl;
			}
			else{
				cout<<"Faltam "<<25+30+31+30+31+31+30+31+30+31+29+31-day<<" dias para o natal!"<<endl;
			}
		}
	}
	return 0;
}
