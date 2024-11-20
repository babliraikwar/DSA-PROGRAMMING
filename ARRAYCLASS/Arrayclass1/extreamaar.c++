#include <iostream>
using namespace std;
void extreamprint(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++;
        right--;
    }
    // int left=0;
    // int right=size-1;
    // while(left<=right){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }
}
int main (){
    int arr[]={ 23,1,34,3,3,4,5,2,0};
        int size=9;
    extreamprint(arr,size);
    
}