#include <iostream>
using namespace std;
//int main(int n)
int getunique(int arr[],int n){
    int ans=0;
   for(int i=0; i<n; i++){
       ans=ans^arr[i];
   } 
   return ans;
}
int main(){
    int arr[]={6,7,9,6,7,9,5,4,5};
    int n=9;
int ans=  getunique(arr,n);
cout<<"ans="<<ans<<endl;
}