#include <iostream>
using namespace std;
 void printdigit(int n){
   while(n>0){
      int oneplace=n%10;
       cout<<oneplace<<endl;
       n=n/10;
 
   }
}
int main(){
    int n;
    cin>>n;
printdigit(n);
}
