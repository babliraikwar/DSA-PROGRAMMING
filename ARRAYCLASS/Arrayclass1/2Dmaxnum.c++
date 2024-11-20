#include <iostream>
#include <limits.h>
using namespace std;
int findmax(int arr[][4],int row,int col){
    int maxnum=INT_MIN;
    for(int i=0; i<row;i++){
        for(int j=0;j<col; j++){
            if(arr[i][j] >maxnum){
                maxnum=arr[i][j];
            }
        }
    }
   return maxnum;
}
// int findmin(int arr[][4],int row,int col){
//     int minnum=INT_MAX;
//     for(int i=0; i<row;i++){
//         for(int j=0;j<col; j++){
//              if(arr[i][j] <minnum){
//                 minnum=arr[i][j];
//             }
//         }
//     }
//    return minnum;
// }
int main(){
    int arr[][4]={
                 {1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}
        };
        int row=3;
        int col=4;
     int ans= findmax(arr,col,row);
     cout<<"maxnum="<<ans;
    //  int ans1= findmin(arr,col,row);
    //  cout<<"minnum="<<ans;
     }
