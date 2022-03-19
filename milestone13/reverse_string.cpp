#include<iostream>
#include<string>
using namespace std;

void reverse(string str,int s,int e){
    if(s>e){
        cout<<str;
        return;
    }
    int temp = str[s];
    str[s]= str[e];
    str[e]=temp;
    reverse(str,s+1,e-1);
}

int main(){
    string str;
    cin>>str;
    int n= str.size();
    reverse(str,0,n-1);
    return 0;
}
