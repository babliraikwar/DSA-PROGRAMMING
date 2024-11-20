#include <iostream>
#include <vector>
using namespace std;
bool keypair(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key)
             return true;
         
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3,8,6,5,0,7};
    int n=9;
    int key=9;
   bool ans= keypair(arr,key ,n);
   cout<< ans;
    
}