#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution{
    
private:
    void juggler(vector<int>&ans,int N){
        if(N==1){
            return;
        }
        if(N%2==0){
            N= pow(N,0.5);
            ans.push_back(N);
            juggler(ans,N);
        }
        else{
            N = pow(N,1.5);
            ans.push_back(N);
            juggler(ans,N);
        }
    }
    
public:
    vector<int> jugglerSequence(int N){
        vector<int>ans;
        ans.push_back(N);
        juggler(ans,N);
        return ans;
    }
};