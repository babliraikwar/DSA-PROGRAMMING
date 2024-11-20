#include <iostream>
using namespace std;
int checkprime(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
        return true;
    
}
int main(){
    int n;
    cin>>n;
    bool isprime(n);
    if(isprime){
        cout<<"num is prime";
    }
    else{
        cout<<"num is not prime";
    }
}