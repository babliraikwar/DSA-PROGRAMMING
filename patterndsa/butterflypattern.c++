#include <iostream>
using namespace std;
int main(){
    int j,n,i;
    cin>>n;
    for(i=0;i<2*n;i++){
        int cond=i<n ? i:n+(n-i-1);
        int space_cond=i<n ? 2*(n-cond-1):i-cond-1;
        for(j=0;j<2*n;j++){
            if(j<=cond){
                cout<<"*";
            }
            else if(space_cond>0){
                cout<<" ";
                space_cond--;
            }
            else{
                cout<<"*";
            }

        }
        cout<<endl;
    }
}