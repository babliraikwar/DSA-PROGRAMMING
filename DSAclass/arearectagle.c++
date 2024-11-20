#include <iostream>
using namespace std;
bool checkmember(int n){
    int f1=0,f2=1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp=f1+f2;
            f1=f2;
            f2=temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}
int main (){ 
bool a=checkmember(2);
cout<<a;


}

//     //reverse number.....................
//     int n,a=0;
//     cin>>n;
//     int z=n,digits=0;
//     while(z!=0){
//         z=z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k=n%10,z=digits-1;
//         while(z--){
//            k= k*10;
//         }
//         a=a+k;
//         digits--;
//         n=n/10;
//     }
//     cout<<a;

// return 0;
// }......................................................................................
//print all prime number......
// int n,flag=1;
// cin>>n;
// for(int i=2;i<=n;i++){
// flag=1;
// for(int j=2;j<=i/2; j++){
//     if(i%j==0){
//         flag=0;
//     }
// }
// if(flag==1){
//     cout<<i<<endl;
// }
// }
// return 0;
// }..................................................................
 // int n,sum=0,factor=1;
// cin>>n;
// while(n!=0){
//     int digit=n%10;
//     sum=sum+digit*factor;
//     factor=2*factor;
//     n=n/10;
// }
// cout<<sum;
// return 0;

// }.....................................................................
//     int width,height;
//     cin>>width>>height;
//     int area=width*height;
//     cout<<"area="<<area;
//     return 0;

// }................................................................