#include<iostream>
using namespace std;

void evenodd(int a,int b){
    if(a>b){
        return;
    }
    cout<<a<<" ";
    evenodd(a+2,b);
}


int main(){
    int n;
    cin>>n;
    cout<<"all the even numbers between 1 and "<<n<<" are : ";
    evenodd(2,n);
    cout<<"\nall the odd numbers between 1 and "<<n<<" are : ";
    evenodd(1,n);
    return 0;
}

