#include <iostream>
 using namespace std;
int main (){ 
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
