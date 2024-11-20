#include <iostream>
#include <vector>
using namespace std;
int pivot(vector<int>nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int lsum=0;
        int rsum=0;
        for(int j=0;j<i;j++)
            lsum=lsum+nums[j];
            
        for(int j=i+1;j<n;j++)
            rsum=rsum+nums[j];
            if(lsum==rsum)
        //     cout<<"for index "<<i<<"left su"<<lsum
        // <<"right sum"<<rsum <<endl;
     return i;
        
    }
    return -1;
}
int main(){
    vector<int>nums={1,7,3,6,5,6};
   int ans =pivot(nums);
   cout<<ans;
}