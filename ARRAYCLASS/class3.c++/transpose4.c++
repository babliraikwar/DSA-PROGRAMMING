#include <iostream>
using namespace std;
void transpose(int arr[][3],int row,int col,int transposearr[4][3]){
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
           // swap(arr[i][j],arr[j][i]);
           transposearr[j][i]=arr[i][j];
        }
    }
}
void printarr(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            cout<<arr[i][j]<<" ";
       }
        cout<<endl;
    }
    
}
int main(){
    int arr[4][3]={
        {1,2,3},
        {5,6,7},
        {9,10,11},
        {1,1,1}
    };
     int row=4;
    int col=3;
    cout<<"printing arr"<<endl;
    printarr(arr,row,col);
    cout<<"transpose arr"<<endl;
    int transposearr[4][3];
    transpose(arr,row,col,transposearr);
    cout<<"printing arr again"<<endl;
    printarr(transposearr,row,col);
   }