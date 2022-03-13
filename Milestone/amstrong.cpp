#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int original = n;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        sum+= round(pow(lastdigit,3)); //here it is important to add round function because return type for pow function is float(i.e. it displays 153 as 152.999..) so round function will round it off as 153
        n = n/10; //eventually value of n becomes 0 as n is integer and float value will be brought down to 0
    }
    if(sum == original){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not an armstrong number"<<endl;
    }
    return 0;
}