// #include <iostream>
// using namespace std;
// int main(){
//     int i ,j,n;
//     cin>>n;
//     // cout<<"hello miss babli jii❤" ;
//     // cin>>n;
//     // for(i=0;i<+n;i++){
//     //     for(j=0;j<i+1;j++){
//     //         cout<<"*";
//     //     }
//     //     cout<<endl;
//     // }for(i=0;i<+n;i++){
//     //     for(j=0;j<n-i;j++){
//     //         cout<<"*";
//     //     }
//     //     cout<<endl;
//     // }
//     // //next paatter.............................................
//     for(i=0;i<=n;i++){
//         for(j=i;j<n;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<=i;k++){
//             cout<<"*";
//         }
//                   cout<<endl;


//     }


// //netx patter........................................................
// for(i=0;i<=n;i++){
//         for(j=1;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=i;k<=n;k++){
//             cout<<"*";
//         }
//                   cout<<endl;


//     }
 #include <iostream>
using namespace std;
int main(){
   int i,j,n;
   cin>>n;
for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=n;k<i;k++){
            cout<<"*";
         }
                  cout<<endl;
                

    }
    for(i=0;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=i;k<n;k++){
            cout<<"*";
         }
                  cout<<endl;

     } 
}  // for(j=0;j<2*i+1;j++){
//         if(j%2==1){
//             cout<<"*";
//         }
//         else{
//             cout<<i+1;
//         }
//     }
//     cout<<endl;
//    }



