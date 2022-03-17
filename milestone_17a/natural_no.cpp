#include<iostream>
using namespace std;

void printnum(int n){
    if(n==0){
        return;
    }
    else{
        printnum(n-1);
        cout<<n<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printnum(n);
    return 0;
}
