#include <iostream>
using namespace std;
int main(){
    int j,n,i;
    cin>>n;
    int c=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}