#include  <iostream>
using namespace std;
void printrowsum(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
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
    printrowsum(arr,row,col);
}