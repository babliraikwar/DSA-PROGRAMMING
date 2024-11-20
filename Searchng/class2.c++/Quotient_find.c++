#include <iostream>
using namespace std;
int quotient(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor<dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
// for positive abs(n)
int main() {
    // Write C++ code here
int divisor=7;
int dividend=-29;
// int n=-5;
// cout<<abs(n)<<endl;
int ans=quotient(abs(divisor),abs(dividend));
if((divisor>0 && dividend<0)|| (divisor<0 && dividend>0))
{
    ans=0-ans;
}
// log(n) time complecity
cout<<"quotient="<<ans;
    return 0;
}