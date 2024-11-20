#include <iostream>
using namespace std;
void reversearr(int arr[],int size){
     for(int left=0, right=size-1;left<=right; 
     left++,right--){
         swap(arr[left],arr[right]);
     }
    // int left=0;
    // int right=size-1;
    // while(left<=right){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[]={ 23,1,34,3,3,4,5,2,0};
        int size=9;
    reversearr(arr,size);
    
}