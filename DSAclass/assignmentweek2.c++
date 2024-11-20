 #include <iostream>
 using namespace std;
int main (){ 
    int i,n,j;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(j==0 || i==n ||i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
             
  cout<<endl;
 }

}




    // inverted gap half paramid.............................
//     int j,i,n;
//     cin>>n;
//     for(i=0;i<n; i++){
//       for(j=0;j<i+1;j++){
//        cout<<" ";
//       }
//       for(j=i;j<n-1;j++){
//         cout<<"*";
//       }
//       cout<<endl;
//     }
    
// }

    // gaphalf paramid.....................................................
//     int i,j,n;
//     cin>>n;
//     for(i=0;i<n;i++){
//         for(j=i;j<n-1;j++){
//             cout<<" ";
//         }
//         for(j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




 // invered half paramid...................................  
//     int i,j,n;
//     cin>>n;
//     for(i=0; i<n;i++){
//         for(j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//     int i,j,n;
//     cin>>n;
//     for(i=0; i<n;i++){
//         for(j=0; j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// } half paramid...................................................



//     int n,i;
//     cin>>n;
//     for(i=0; i<n;i++){
//         for(int j=0; j<n;j++){
//             if(i==0 || i==n-1){
//                 cout<<"*";
//             }
//             else if(j==0 || j==n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     cout<<endl;

//     }
// }//hollo full paramid ..............................................................



// int n,i,j;
// cin>>n;
// for(i=1;i<=n;i++){
//     for(j=1; j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;

// }
// } print full pramid................................................