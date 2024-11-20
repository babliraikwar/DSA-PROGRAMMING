#include <iostream>
using namespace std;
int reverse(int n){
    int rem=0,sum=0;
while(n>0){
    rem=n%10;

    sum=sum*10+rem;
    n=n/10;
}
    return sum;
}
int main(){
    int n;
    cin>>n;
    int ans =reverse(n);
    cout<<ans;
}