#include<iostream>
using namespace std;

void matrixmult(int row1,int col1,int row2,int col2,int arr1[][10],int arr2[][10],int sum=0){
    static int i=0,j=0,k=0;
    if(i>row1){
        return;
    }
    if(i<row1){
        if(j<col2){
            if(k<col1){
                sum+= arr1[i][k]*arr2[k][j];
                k++;
                matrixmult(row1,col1,row2,col2,arr1,arr2,sum);
            }
            else{
                cout<<sum<<" ";
                sum=0;
                k=0;
                j++;
                matrixmult(row1,col1,row2,col2,arr1,arr2,sum);
            }
        }
        else{
            cout<<endl;
            j=0;
            sum=0;
            i++;
            matrixmult(row1,col1,row2,col2,arr1,arr2,sum);
        }
    }
}

int main(){
    int row1,col1;
    int row2,col2;
    cout<<"enter number of rows and columns for array 1:\n";
    cin>>row1>>col1;
    cout<<"enter number of rows and columns for array 2:\n";
    cin>>row2>>col2;
    int arr1[10][10];
    int arr2[10][10];
    cout<<"enter values for array 1\n";
    for(int i = 0;i<row1;i++){
        for(int j = 0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter values for array 2\n";
    for(int i = 0;i<row2;i++){
        for(int j = 0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    cout<<"multiplied array is as follows :\n";
    matrixmult(row1,col1,row2,col2,arr1,arr2);
    return 0;
}
