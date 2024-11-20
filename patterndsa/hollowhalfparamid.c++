#include <iostream>
 using namespace std;
int main (){ 
    int i,n,j;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(j==0 || i==n ||i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
             
  cout<<endl;
 }

}
