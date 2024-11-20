#include <iostream>
#include <vector>
using namespace std;
void sortcolor(vector<int>nums){
    int n=nums.size();
    int left=0;
    int i=0;
    int right=n-1;
    while(i<=right){
        if(nums[i]==0){
            swap(nums[i],nums[left]);
            left++;
            i++;
        }
        else if(nums[i]==2){
            swap(nums[i],nums[right]);
            right--;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<nums.size();i++){
           cout<<nums[i];
       }
}

   int main(){
    vector<int>nums={1,1,2,0,0,1,2,0,0,2,2,1};
   sortcolor(nums);
  }