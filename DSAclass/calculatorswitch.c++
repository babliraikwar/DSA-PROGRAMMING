#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"enter two number";
    cin>>a>>b;
    int op;
    cout<<"what operation do you want to ?";
    cin>>op;
    float ans=0;
    switch(op){
        case 0:
        ans=a+b;
        break;
        case 1:
        ans=a-b;
                break;

        case 2:
        ans=a*b;
                break;

        case 3:
        ans= a/b;
                break;

        default:
        cout<<"invalid operator"<<endl;
        return 0;
    }
    cout<<"your ans is:"<<ans<<endl;
    return 0;

 }















//     float a,b;
//     cout<<"Enter two number:"<<endl;
//     cin>>a>>b;
//     int op;
//     cout<<"what operation you want to do?"<<endl;
//     float ans=0;
//     if(op==0){
//         ans=a+b;
//     }
//     else if(op==1){
//         ans=a-b;
//         }
//     else if(op==2){
//         ans=a*b;
//     }
//     else if(op==3)
// {
//     ans=a/b;
// }
// else{
//     return 0;
// }
// cout<<"finaly your answer:"<<ans<<endl;
// return 0;


