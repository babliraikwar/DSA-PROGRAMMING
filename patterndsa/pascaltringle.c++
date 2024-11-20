#include <iostream>
using namespace std;
int main(){
    int j,n,i;
    cin>>n;
    for(i=1;i<=n;i++){
            int c=1;
        for(j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
}