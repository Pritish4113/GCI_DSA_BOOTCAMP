#include<iostream>
using namespace std;

void lcm(int a,int b){
    static int m =0;
    m+=b;
    if(m%a==0 && m%b==0){
        cout<<m;
        return;
    }
    lcm(a,b);
}

int main(){
    int a,b;
    cin>>a>>b;
    lcm(a,b);
    return 0;
}

