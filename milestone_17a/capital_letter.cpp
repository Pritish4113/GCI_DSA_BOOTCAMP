#include<iostream>
#include<string>
using namespace std;

void capital(string str){
    if(str.size()==0){
        return;
    }
    if(str[0]>=65 && str[0]<=90){
        cout<<"the first capital letter is "<<str[0];
    }
    else{
        str.erase(0,1);
        capital(str);
    }
}

int main(){
    string str;
    cin>>str;
    capital(str);
    return 0;
}
