#include <iostream>
using namespace std;
int main(){
    int j,n,i;
    cin>>n;
    for(i=0;i<n;i++){
        int cand=i<=n/2 ?2*i :2*(n-i-1);
        for(j=0;j<=cand;j++){
            if(j<=cand/2){
                cout<<j+1;
            }
            else{
                cout<<cand-j+1;
            }
        }
        cout<<endl;
    }
}