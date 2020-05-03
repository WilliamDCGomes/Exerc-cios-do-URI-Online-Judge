#include <iostream>
using namespace std;
int main(){
    int b=0,c=0,v=0,d=0;
    cin>>b;
    for(v=0;v<=332;v++){
        for(c=0;c<b;c++){
            if(d<1000){
                cout<<"N["<<d<<"] = "<<c<<endl;
                d++;
            }
        }
    }
    return 0;
}
