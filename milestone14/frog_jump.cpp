#include<iostream>
#include<climits>
using namespace std;
int energy = INT_MAX;
int onestep,twostep;
int frogJump(int n, int heights[],int i=0){
    if(i==n-1){
        return 0;
    }
    if(i+1<n){
        onestep = abs(heights[i]-heights[i+1]) + frogJump(n,heights,i+1);
    }
    if(i+2<n){
        twostep = abs(heights[i]-heights[i+2]) + frogJump(n,heights,i+2);
    }
    energy = min(onestep,twostep);
    return energy;
}

int main(){
    int n;
    cin>>n;
    int heights[n];
    for(int i =0;i<n;i++){
        cin>>heights[i];
    }
    int ans=frogJump(n,heights);
    cout<<ans;
    return 0;
}