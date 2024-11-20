#include <bits/stdc++.h>
#include <vector>
using namespace std;
void missing(vector<int>v){
   int n=v.size();
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
   }
}
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         if(i==v[i])
//         {
//             continue;
//         }
//         else{
//             return i;
//         }
//     }
// }
int main(){
    vector<int>v={1,0,3,-9,8,-6};
 missing(v);
//  cout<<ans;
}