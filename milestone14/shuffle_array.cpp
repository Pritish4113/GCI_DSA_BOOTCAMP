#include<iostream>
using namespace std;

void shuffle(int arr[],int temp[],int n){
    int static j =0;
	static int index=0;
	if(index>=n){
	    for(int i=0;i<n;i++){
            arr[i]=temp[i];
	    }
        return;
	}
	temp[index]=arr[j];
	index++;
	temp[index]=arr[n/2+j];
	index++;
    j++;
	shuffle(arr,temp,n);
}

void shuffleArray(int arr[],int n){
	int temp[n];
    shuffle(arr,temp,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    shuffleArray(arr,n);
    cout<<"shuffled array :"<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
