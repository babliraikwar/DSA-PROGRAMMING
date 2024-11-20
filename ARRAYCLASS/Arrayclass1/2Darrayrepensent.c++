#include <iostream>
using namespace std;
void printarray(int arr[][4],int row,int col){
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    int row=3;
    int col=4;
    printarray(arr,col,row);
    // int arr1[]={1,2,3,4};

    // int brr[3][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    
    // };
    
}