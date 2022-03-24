#include<iostream>
using namespace std;

string ans;
static int i =0;

string remove(string s){
    if(i==s.size()){
        ans+='\0';
        return ans;
    }
    char a = s[i];
    if(i==(s.size()-1)){
        ans+=a;
    }
    if(s[i+1]==a){
        i++;
    }
    else{
        ans+=a;
        i++;
        remove(s);
    }
}

int main(){
    string s;
    cin>>s;
    string ans=remove(s);
    cout<<ans;
    return 0;
}
