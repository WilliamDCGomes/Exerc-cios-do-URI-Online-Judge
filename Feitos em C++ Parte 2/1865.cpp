#include <iostream>
using namespace std;
int main(){
	int forca,quant;
	cin>>quant;
	string name[quant];
	for(int i=0;i<quant;i++){
		cin>>name[i]>>forca;
	}
	for(int i=0;i<quant;i++){
		if(name[i]=="Thor"){
			cout<<"Y"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}
	}
	return 0;
}
