#include <iostream>
using namespace std;
int main(){
    int j,n ,i;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i; j++){
if(i==n || j==1 ||i==j){
    cout<<"* ";
       }
else {
    cout<<"  ";
}
 }
 cout<<endl;
}
}