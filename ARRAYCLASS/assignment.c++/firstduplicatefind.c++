#include <iostream>
using namespace std;
int  frepeate(int arr[],int n){
    for(int i=0;i<n;i++){
        bool isrepeated=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                isrepeated=true;
            }

       }
               return -1;

    }

}
int main(){
    int arr[]={1,5,3,4,3,5,6};
    int n=sizeof(arr)/sizeof(int);
   int ans= frepeate(arr,n);
   cout<<ans;
}