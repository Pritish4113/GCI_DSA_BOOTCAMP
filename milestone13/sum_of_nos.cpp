#include<iostream>
using namespace std;

void sumofnumbers(int n,int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    sum+=n;
    sumofnumbers(n-1,sum);
}

int main(){
    int n;
    cin>>n;
    sumofnumbers(n,0);
    return 0;
}
