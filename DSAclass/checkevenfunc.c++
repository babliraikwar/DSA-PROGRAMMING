#include <iostream>
using namespace std;
bool checkeven(int n){
    if((n&1)==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool iseven=checkeven(n);
    if(iseven){
        cout<<"is even number.\n";
    }
    else{
        cout<<"is odd number\n";
    }
    
}