#include<iostream>
using namespace std;

void GCD(int a,int b){
    if(a==b){
        cout<<a;
        return;
    }
    if(a>b){
        GCD(a-b,b);
    }
    else{
        GCD(a,b-a);
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    GCD(a,b);
    return 0;
}
