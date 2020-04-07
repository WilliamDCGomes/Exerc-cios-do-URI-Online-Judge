#include <iostream>
using namespace std;
int main(){
	int p;
	cin>>p;
    int a[p],n;
    for(int b=0;b<p;b++){
        cin>>a[b];
    }
    for(int b=0;b<p;b++){
    	n=a[b]%2;
        if(a[b]>0){
        	if(n==0){
        		cout<<"EVEN POSITIVE"<<endl;
			}
			else{
				cout<<"ODD POSITIVE"<<endl;
			}
		}
		else if(a[b]<0){
			if(n==0){
				cout<<"EVEN NEGATIVE"<<endl;
			}
			else{
				cout<<"ODD NEGATIVE"<<endl;
			}
		}
		else{
			cout<<"NULL"<<endl;
		}
    }
    return 0;
}
