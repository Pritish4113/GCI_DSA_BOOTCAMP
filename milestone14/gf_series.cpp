#include<iostream>
#include<cmath>
using namespace std;

int gf(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return pow(gf(n-2),2) - gf(n-1);
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<gf(i)<<" ";
    }
    return 0;
}
