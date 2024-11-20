#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n-1; i++){
        int k=0;
        if(i<n){
            k=i;
        }
        else{
            k=n-(i%n)-2;;
        }
        for(int j=0;j<=k; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}