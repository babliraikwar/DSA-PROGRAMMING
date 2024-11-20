// #include <iostream>
// using namespace std;

bool checkprime(int n){
    for(int i=2;i<n;i++)
{
if(i%2==0){
    return false;
}
return true;
}
}
int main(){
    bool ans=checkprime(2);
}


// void primenumber(int n){
//     if(n%n==0 && n%1==0){
//         cout<<"its prime number";
//     }
//     else{
//         cout<<"it is not prime number";
//     }
// }
// int main(){
//     primenumber(3);
// }...................................................................


// void sumeven(int n){
//     int sum=0;
//     for(int i=2; i<=n; i+2){
//         sum=sum+i;
//     }
// cout<<sum;
// }
// int main()
// { 
// sumeven(20);
//  }...........................................................................
    
    // void sumallnum(int n){
//     int sum=0;
//     for(int i=0; i<=n;i++){
//         sum=i+sum;
//     }
//     cout<<sum;
    
// }
// int main(){
//     sumallnum(10);
// }.............................................................................


// void evenodd(int n){
//     if(n%2==0){
//         cout<<"its even"<<endl;
//     }
//     else{
//         cout<<"its odd"<<endl;
//     }
// }
// int main (){
//     evenodd(5);
// }.................................................................
// void printcounting(int n){
//     for(int i=0; i<=n;i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
// printcounting(10);
// }

// int maxnum(int n1,int n2,int n3){
//     int ans=max(n1,n2);
//    int  againans=max(ans,n3);
// //    cout<<againans<<endl;
// return againans;

// }
// int main(){
//   int finalresult=  maxnum(3,5,9);
//   cout<<finalresult;
// }



// void maxnum(int num1,int num2,int num3){
//     if(num1>num2 && num1>num3){
//         cout<<num1<<endl;
//         }
//     else if(num2>num1 && num2>num3){
//           cout<<"max="<<num2<<endl;
//         }
//         else{
//             cout<<"max="<<num3<<endl;
//         }

//     }

// int main(){
//     maxnum(2 ,3,4);
// }