#include<iostream>
using namespace std;

void hailstone(int n){
    if(n==1){
        return;
    }
    if(n%2==0){
        cout<<n/2<<" ";
        hailstone(n/2);
    }
    else{
        cout<<3*n+1<<" ";
        hailstone(3*n+1);
    }
}

int main(){
    int n;
    cin>>n;
    hailstone(n);
    return 0;
}
