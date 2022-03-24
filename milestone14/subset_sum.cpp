#include<iostream>
#include<vector>
using namespace std;

// I SOLVED THE QUESTION ON GFG AND COPIED IT TO VSCODE

class Solution
{
private:
    void subset(vector<int>&ans,vector<int>output,vector<int>nums,int index){
        if(index>=nums.size()){
            int sum=0;
            for(int i =0;i<output.size();i++){
                sum+=output[i];
            }
            ans.push_back(sum);
            return;
        }
    //include
        int element = nums[index];
        output.push_back(element);
        subset(ans,output,nums,index+1);
        output.pop_back();

    //exclude
        subset(ans,output,nums,index+1);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        vector<int>output;
        int index=0;
        subset(ans,output,arr,index);
        return ans;
    }
};

