#include <iostream>
using namespace std;
int main(){
    int vezes,valor;
    while(cin>>vezes){
        if(vezes==0){
            cout<<"0"<<endl;
            break;
        }
        cin>>valor;
        int n[vezes],memo[vezes],vmax=0,start=0,guarda=0;
        for(int x=0;x<vezes;x++){
            cin>>n[x];
            memo[x]=n[x]-valor;
            if(x==0&&memo[x]>vmax){
                vmax=memo[x];
            }
            if(memo[x]>0&&start==0){
                guarda=x;
                start++;
            }
            if(memo[x]+memo[x-1]>memo[x]&&x>0){
                memo[x]+=memo[x-1];
            }
            if(memo[x]>vmax&&x>0){
                vmax=memo[x];
            }
        }
        if(start==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<vmax<<endl;
        }
    }
    return 0;
}
