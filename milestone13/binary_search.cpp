#include<iostream>
using namespace std;

void binarysearch(int arr[],int s,int e,int key){
    int mid = (s+e)/2;
    if(s>e){
        cout<<"element not found\n";
        return;
    }
    else if(arr[mid]== key){
        cout<<"element found in the array\n";
        return;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    binarysearch(arr,s,e,key);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    binarysearch(arr,0,n-1,key);
    return 0;
}
