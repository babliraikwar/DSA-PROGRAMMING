#include <iostream>
#include<limits.h>
using namespace std;
void min(int arr[][4],int row ,int col){
    int mini=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>mini){
                mini=arr[i][j];

            }
        }


    }
    cout<< mini;
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,12,434,3}
        
    };
    int col=4;
    int row=3;
    min(arr,col,row);   
}
