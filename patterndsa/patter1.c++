#include <iostream>
using namespace std;
int main(){
   int row,col,n;
   cin>>n;
   for(row=0;row<n;row++)
   {
       int totalcol=row+1;
       for(col=0;col<totalcol; col++){
           if(col==totalcol-1){
               cout<<row+1;
           }
           else{
               cout<<row+1<<"*";
           }
       }
       cout<<endl;
   }
//     for(j=0;j<2*i+1;j++){
//         if(j%2==1){
//             cout<<"*";
//         }
//         else{
//             cout<<i+1;
//         }
//     }
//     cout<<endl;
//    }

}