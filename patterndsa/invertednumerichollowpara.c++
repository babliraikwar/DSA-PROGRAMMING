#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n; i++){
        for(j=i+1;j<=n;j++){
            if(j==i+1|| j==n || i==0){
                cout<<j+1 ;
             }
             else{
                cout<<" ";
            }

    }
            cout<<endl;

}
}