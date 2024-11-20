#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int n=5;
    cout<<"ener the inpt:"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];

    }
        int sum=0;
    for( int i=0;i<n; i++){
       sum=sum+arr[i];
    }
    cout<<"printing sum="<<sum <<endl;
}