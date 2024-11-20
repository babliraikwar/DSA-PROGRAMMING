#include <iostream>
#include <vector>
using namespace std;
int missing(vector<int>v){
    int n=v.size();
    int sum=0;
    for(int i=0; i<n;i++){
        sum=sum+v[i];
    } 
    
    int totalsum=((n)*(n+1))/2;
    int ans=totalsum-sum;
    return ans;
}
int main(){
    vector<int>v={0,1,2,3,5,6,7,8,9,10};
 int ans1= missing(v);
 cout<<ans1;
}