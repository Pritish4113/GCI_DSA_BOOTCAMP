#include<iostream>
using namespace std;

void remove(string s,string output,int i){
    if(i==s.size()){
        cout<<output;
        return;
    }
    if(s[i+1]==s[i]){
        s.erase(0,1);
        remove(s,output,i+1);
    }
    else{
        output.push_back(s[i]);
        remove(s,output,i+1);
    }
}

int main(){
    string s;
    cin>>s;
    string output="";
    int i=0;
    remove(s,output,i);
    return 0;
}

