#include<bits/stdc++.h>
using namespace std;
int main() {
	double s;
	while(cin>>s){
		int va,vb;
		double temp=0;
		cin>>va>>vb;
		if(va>vb){
			temp=s/(va-vb);
			printf("%.2f\n",temp);
		}
		else{
			cout<<"impossivel"<<endl;
		}
	}
	return 0;
}
