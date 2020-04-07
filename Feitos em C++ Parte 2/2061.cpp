#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string name[b];
    for(int x=0;x<b;x++){
        cin>>name[x];
        if (name[x]=="fechou"){
            a++;
        }
        else{
            a--;
        }
    }
    cout<<a<<endl;
    return 0;
}
