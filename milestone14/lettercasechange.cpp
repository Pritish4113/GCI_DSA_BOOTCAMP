#include<iostream>
using namespace std;

void lettercase(string str,string output,int index){
    if(index==str.size()){
        cout<<output<<endl;
        return;
    }
    //no change
    lettercase(str,output+str[index],index+1);
    //change case
    char a;
    if(isupper(str[index])){
        a = tolower(str[index]);
        lettercase(str,output+a,index+1);
    }
    else{
        a = toupper(str[index]);
        lettercase(str,output+a,index+1);
    }
}

int main(){
    string str="Ab";
    string output="";
    int index=0;
    lettercase(str,output,index);
    return 0;
}
