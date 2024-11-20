#include <bits/stdc++.h>
#include <vector>
using namespace std;
int missing(vector<int>v){
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i==v[i])
        {
            continue;
        }
        else{
            return i;
        }
    }
}
int main(){
    vector<int>v={1,0,6,9,8,6,4,3,2,5};
 int ans1= missing(v);
 cout<<ans1;
}