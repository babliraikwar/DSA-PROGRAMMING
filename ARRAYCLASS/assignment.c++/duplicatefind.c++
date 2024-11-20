#include <bits/stdc++.h>
#include <vector>
using namespace std;
void move(vector<int>v){
    int n=v.size();
    sort(v.begin(),v.end());
    // for(int i=0;i<n;i++){
    //     if(v[i]==v[i+1]){
    //         cout<<v[i];
    //     }
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            cout<<v[i];
        }
        
    }
}
   int main(){
    vector<int>v={1,2,2,3,4};
 move(v);
//  cout<<ans;
}