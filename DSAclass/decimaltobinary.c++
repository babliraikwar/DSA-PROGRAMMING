#include <iostream>
#include <cmath>
using namespace std;
// int main(){
//     int n,i=0;
//     cin>>n;
//     int binaryno=0;
//     while(n>0){
//         int bit=n%2;
//         cout<<bit<<endl;
//         binaryno=bit*pow(10,i++)+binaryno;
//         n=n/2;
//         i++;
//     }
//     cout<<binaryno;
// }
int decimaltobinary(int n){
int binaryno=0;
int i=0;
while(n>0){
    int bit =n % 2;
    binaryno=bit*pow(10,i++)+binaryno;
    n=n/2;
}
    return binaryno;
}
int main(){
    int n;
    cin>>n;

    int binary=decimaltobinary(n);
    cout<<binary<<endl;
}