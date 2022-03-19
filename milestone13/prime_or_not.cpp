#include<iostream>
using namespace std;

void primeornot(int n,int num){
    if(num==1){
        cout<<"prime"<<endl;
        return;
    }
    if(n%num==0){
        cout<<"not prime"<<endl;
        return;
    }
    else{
        primeornot(n,num-1);
    }
}

int main(){
    int n;
    cin>>n;
    primeornot(n,n-1);
    return 0;
}
