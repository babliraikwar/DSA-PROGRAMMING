// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int n=10;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for( int i=0;i<n;i++){
        arr[i]=2*arr[i];
    }
    for( int i=0; i<n;i++){
        cout<<arr[i]<<"";


    }

}

//    for(int i;i<n; i++){
//        cout<<"enter the value for index:"<<i<<endl;
//        cin>>arr[i];
//        cout<<endl;
// }
// cout<<" printing the array"<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
     
// }

//     return 0;
// }