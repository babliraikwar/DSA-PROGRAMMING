    #include <iostream>
    #include <vector>
    using namespace std;
    void sortcolors(vector<int>& nums) {
        int n=nums.size();
        int zero,one,two;
        zero=one=two=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }

        }
        int i=0;
        while(zero--){
            nums[i]=0;
            i++;
        }
        while(one--){
            nums[i]=1;
            i++;
        }
        while(two--){
            nums[i]=2;
            i++;
        }
        for(int i=0;i<nums.size();i++){
           cout<<nums[i];
       }

    }
    int main(){
        vector<int>nums=  {1,2,0,0,1,0,0,1,2,0};
        sortcolors(nums);
    //   for(int i=0;i<nums.size();i++){
    //       cout<<nums[i];
    //   }
    }