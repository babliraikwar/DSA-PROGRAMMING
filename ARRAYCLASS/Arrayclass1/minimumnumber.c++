#include <iostream>
#include <limits.h>
using namespace std;
int minimumnum(int arr[],int size){
    int minans=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minans){
            minans=arr[i];
        }
    }
    return minans;
}
int main(){
    int arr[]={10,20,23,4,25,-34,32,32};
    int size=8;
   int ans= minimumnum(arr,size);
   cout<<"minimum num:"<<ans;

}