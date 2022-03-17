#include<iostream>
using namespace std;

int powernum(int base,int power){
    if(power == 0){
        return 1;
    }
    return base*powernum(base,power-1);
}

int main(){
    int base,power;
    cin>>base>>power;
    int ans = powernum(base,power);
    cout<<ans;
    return 0;
}
