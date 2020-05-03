#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int x=0;x<n;x++){
        cin>>vet[x];
        int ver=vet[x]-2015;
        if(ver==0){
            cout<<"1 A.C."<<endl;
        }
        else if(ver>0){
            cout<<ver+1<<" A.C."<<endl;
        }
        else{
            cout<<ver*(-1)<<" D.C."<<endl;
        }
    }
    return 0;
}
