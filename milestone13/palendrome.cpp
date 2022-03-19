#include<iostream>
#include<string>
using namespace std;

void palendrome(string str,int s,int e,int count=0){
    if(e<0){
        if(count == str.size()){
            cout<<"its a palendrome";
        }
        return;
    }
    if(str[s]==str[e]){
        count++;
        palendrome(str,s+1,e-1,count);
    }
    else{
        cout<<"its not palendrome";
        return;
    }
}

int main(){
    string str;
    cin>>str;
    int size = str.size();
    palendrome(str,0,size-1);
    return 0;
}
