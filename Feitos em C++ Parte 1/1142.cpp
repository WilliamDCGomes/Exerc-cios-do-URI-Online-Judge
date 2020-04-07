#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,vez=1,n=0;
    cin>>a;
    for(int z=0;z<a;z++){
    	cout<<z+1+n<<" "<<z+2+n<<" "<<z+3+n<<" PUM"<<endl;
    	n+=3;
	}
    return 0;
}
