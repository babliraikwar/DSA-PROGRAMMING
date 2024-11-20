#include <iostream>
#include <vector>
using namespace std;
int peakele(vector<int>&arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        // ans;
    }
    return arr[s];
}
int main(){
    vector<int>arr={10,20,30,90,70,60,50,40};
  int ans=  peakele(arr);
  cout<<"peak ele="<<ans;
  
}
 