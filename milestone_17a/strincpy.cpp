#include<iostream>
#include<string>
using namespace std;

void strcopy(char str1[],char str2[],int n){
    static int check=0;
    if(check>n){
        return;
    }
    str2[check]=str1[check];
    check++;
    strcopy(str1,str2,n);
}

int main(){
    int n;
    cin>>n;
    char str1[n],str2[n];
    cin>>str1;strcopy(str1,str2,n);
    cout<<str2;
    return 0;
}
