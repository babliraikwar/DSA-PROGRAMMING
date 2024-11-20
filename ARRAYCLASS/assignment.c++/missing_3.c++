#include <bits/stdc++.h>
#include <vector>
using namespace std;
void missing(vector<int>v){
    int ans=0;for(int i=0;i<v.size();i++){
        ans^=v[i];
    }
    int n=v.size();
    for(int i=0; i<=n;i++){
        ans^=i;
        
    }

    cout<<ans;
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
    vector<int>v={1,0,3};
 missing(v);
//  cout<<ans;
}