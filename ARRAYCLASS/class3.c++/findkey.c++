#include <iostream>
using namespace std;
bool find(int arr[][3],int col, int row,int key){
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            if(arr[i][j]==key){
                return true;
                
            }
        }
    }
return false;
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
        int key=44;
    int col=3;
    int row=3;
   bool ans= find(arr,row,col,key);
   cout<<ans;
}