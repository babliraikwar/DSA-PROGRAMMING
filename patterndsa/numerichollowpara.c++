#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n; i++){
        for(j=0;j<=i;j++){
            if(j==0 || j==i || i==n-1){
                cout<<j+1;
            }
            else{
                cout<<" ";
            }

    }
            cout<<endl;

}
}