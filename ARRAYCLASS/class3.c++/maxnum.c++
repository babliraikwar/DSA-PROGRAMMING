#include <iostream>
#include<limits.h>
using namespace std;
void max(int arr[][4],int row ,int col){
    int maxi=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];

            }
        }


    }
    cout<< maxi;
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,12,434,3}
        
    };
    int col=4;
    int row=3;
    max(arr,col,row);   
}
