#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
bool linearserch(int arr[],int size,int target){
    for(int i=0;i<size ;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={3,7,8,6,8};
    int size=5;
    int target=5;
    printarray(arr,size);
    bool ans=linearserch(arr,size,target);
    if(ans==1){
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }
    
}