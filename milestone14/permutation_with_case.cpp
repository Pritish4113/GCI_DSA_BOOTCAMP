#include<iostream>
using namespace std;

void casechange(string str,string output,int index){
    if(index==str.size()){
        cout<<output<<endl;
        return;
    }
    //lowercase
    casechange(str,output+str[index],index+1);
    //uppercase
    char a = toupper(str[index]);
    casechange(str,output+a,index+1);
}

int main(){
    string str="ab";
    string output="";
    int index=0;
    casechange(str,output,index);
    return 0;
}
