#include<iostream>
using namespace std;

void digits(int n,int sum=0,int count=0){
    if(n==0){
        cout<<"sum is "<<sum<<endl;
        cout<<"number of digits are "<<count;
        return;
    }
    sum+= n%10;
    count++;
    digits(n/10,sum,count);

}

int main(){
    int n;
    cin>>n;
    digits(n);
    return 0;
}
