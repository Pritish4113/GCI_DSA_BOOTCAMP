#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void space(string output,char str[],int i){
    if(i==strlen(str)){
        cout<<output;
        return;
    }
    output=output+str[i];
    space(output,str,i+1);
    output=output+" ";
    space(output,str,i+1);
}

vector<string>  spaceString(char str[])
{
int i=0;
string output="";
space(output,str,i);
}