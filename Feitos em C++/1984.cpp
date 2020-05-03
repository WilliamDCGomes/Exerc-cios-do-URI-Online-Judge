#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int x=0,y;
    while(n>0){
        y=n%10;
        x=x*10+y;
        n/=10;
        if(x==0){
            cout<<x;
        }
    }
    cout<<x<<endl;
    return 0;
}
