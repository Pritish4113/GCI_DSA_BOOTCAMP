#include<iostream>
using namespace std;

void largest(int arr[],int n,int max=0){
    if(n==0){
        cout<<max;
        return;
    }
    if(arr[0]>max){
        max = arr[0];
    }
    largest(arr+1,n-1,max);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    largest(arr,n);
    return 0;
}
