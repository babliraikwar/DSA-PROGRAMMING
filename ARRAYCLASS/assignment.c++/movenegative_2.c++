#include <bits/stdc++.h>
#include <vector>
using namespace std;
void move(vector<int>v){
   int n=v.size();
   int l=0;
   int h=n-1;
   while(l<h){
       if(v[l]<0){
           l++;
       }
       else if(v[h]>0){
           h--;
       }
       else{
           swap(v[l],v[h]);
       }
//       for(int i=0;i<n;i++){
//       cout<<v[i]<<" ";
//       }
  }
   for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
       }
  
//   sort(v.begin(),v.end());
//   for(int i=0;i<n;i++){
//       cout<<v[i]<<" ";
//   }
}
int main(){
    vector<int>v={-1,0,3,-8,-6,9,-4,5,-5};
 move(v);
//  cout<<ans;
}