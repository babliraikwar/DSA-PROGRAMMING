#include <iostream>
#include <cmath>
using namespace std;
int binarytodecimal(int n){
    int decimal=0;
    int i=0;
    while(n>0){
        int bit=n%10;
        decimal=decimal+bit*pow(10,i++);
        n/=10;
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
   int decimal=binarytodecimal(n);
   cout<<decimal<<endl;<< th


}
