#include <iostream>
#include <vector>
using namespace std;
int duplicatefind(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            if(nums[index]<0){
                ans=index;
                break;
            }
            nums[index]*=-1;
        }
        return ans;
    }
int main(){
    vector<int>nums={1,3,4,2,2};
int ans=duplicatefind(nums);
cout<<ans;
}