#include <iostream>
using namespace std;
void dynamic(int arr[],int n){
    cout<<"array ele."<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    // static  memory location
    // int arr[5]={1,2,3,4,5};
    // int size=5;
    int n;
    cin>>n;
    int*arr=new int[n]; // each elemen shoud be 0 or garbage
    for(int i=0;i<n;++i){
        int data;
        cin>>data;
        arr[i]=data;
    }
    arr[5]=80;
    dynamic(arr,n);
}