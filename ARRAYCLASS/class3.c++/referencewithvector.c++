#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>sum){
    int n=sum.size();
    for(int i=0 ;i<n;i++){
        sum.push_back(i);
    }
    for(int j=1; j<n;j++){
        cout<<sum[j]<<endl;
    } 
}
int main(){
    vector<int>v={1,2,3,4,5,5,6,7};
    
    print(v);
}