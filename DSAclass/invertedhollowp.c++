#include <iostream>
using namespace std;
int main(){
    int i,j,n;
cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(i==0 || i==n-1){
                cout<<"*";
            }
            else{
                if( j==0 || j==n-i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }

    }
    cout<<endl;
}

}