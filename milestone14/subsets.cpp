#include<iostream>
#include<string>
using namespace std;

void sub(string s,string ans,int index){
    if(index>=s.size()){
        cout<<ans<<endl;
        return;
    }
    //include
    char a=s[index];
    sub(s,ans+a,index+1);

    //exclude
    sub(s,ans,index+1);
}

int main(){
    int index=0;
    string s;
    getline(cin,s);
    string ans ="";
    sub(s,ans,index);
    return 0;
}