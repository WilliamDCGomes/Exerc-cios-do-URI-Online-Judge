#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int teste;
    for(int x=0;x<num;x++){
        cin>>teste;
        if(teste%2==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}
