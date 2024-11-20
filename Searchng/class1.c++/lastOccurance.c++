#include <iostream>
#include <vector>
using namespace std;
// last occurance
int lastoccurance(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
           ans=mid;
           
        start=mid+1;

        //   start=mid+1; for last occurance
            
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
   
int main(){
    int arr[]={10,20,30,30,30,60,70,80,9,} ;
    int n=9;
    int target=30;
    int ans=lastoccurance(arr,n,target); 
    if(ans==-1){
        cout<<"element not fount:"<<ans<<endl;
    }                       
    else{
        cout<<"element an at index:"<<ans<<endl;
    }
      
      
     
}