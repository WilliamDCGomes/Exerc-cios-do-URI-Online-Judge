#include <iostream>
using namespace std;
int main(){
    int vetor[10],i=0;
    for(i=0;i<=9;i++){
        cin>>vetor[i];
    }
    for(i=0;i<=9;i++){
        if(vetor[i]<=0){
            vetor[i]=1;
        }
        cout<<"X["<<i<<"] = "<<vetor[i]<<endl;
    }
    return 0;
}
