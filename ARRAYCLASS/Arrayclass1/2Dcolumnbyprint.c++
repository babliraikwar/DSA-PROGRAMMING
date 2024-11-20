#include <iostream>
using namespace std;
void printarray(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,12,11}
    };
    int col=4;
    int row=3;
    printarray(arr,row,col);
    return 0;
}