#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(((b-c)<a&&a<(b+c))&&((a-c)<b&&b<(a+c))&&((a-b)<c&&c<(a+b))){
        cout<<"S"<<endl;
    }
    else if(((d-c)<a&&a<(d+c))&&((a-c)<d&&d<(a+c))&&((a-d)<c&&c<(a+d))){
        cout<<"S"<<endl;
    }
    else if(((b-c)<d&&d<(b+c))&&((d-c)<b&&b<(d+c))&&((d-b)<c&&c<(d+b))){
        cout<<"S"<<endl;
    }
    else if(((b-d)<a&&a<(b+d))&&((a-d)<b&&b<(a+d))&&((a-b)<d&&d<(a+b))){
        cout<<"S"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }
    return 0;
}
