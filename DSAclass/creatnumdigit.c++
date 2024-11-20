#include <iostream>
using namespace std;
int creatnumdigit(int n){
    int num=0;
    for( int i=0; i<n; i++){
        cout<<"enter digit"<<endl;
        int digit;
        cin>>digit;
        num=num*10+digit;
        cout<<"number created so far:"<<num<<endl;
    }
    return num;
    
}
int main(){
    int n;
    cin>>n;
 int num=creatnumdigit(n);
 cout<<"created number:"<<num<<endl;
}
