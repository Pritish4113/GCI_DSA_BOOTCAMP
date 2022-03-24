#include<iostream>
using namespace std;

void tower(int n,char rod,char help,char aim){
    if(n==0){
        return;
    }
    tower(n-1,rod,aim,help);
    cout<<"move from "<<rod<<" to "<<aim<<endl;
    tower(n-1,help,rod,aim);
}

int main(){
    int n;
    cin>>n;
    tower(n,'A','B','C');
    return 0;
}