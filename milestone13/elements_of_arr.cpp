#include<iostream>
using namespace std;

void arrelements(int arr[],int n){
    if(n<0){
        return;
    }
    cout<<arr[0]<<" ";
    arrelements(arr+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    arrelements(arr,n-1);
    return 0;
}
