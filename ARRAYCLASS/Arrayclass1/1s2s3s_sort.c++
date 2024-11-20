#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>arr={1,2,1,2,0,1,0,0,1};
int n=arr.size();
int left=0;
int right=n-1;
int i=0;
while(i<=right){
    if(arr[i]==0){
        swap(arr[i],arr[left]);
        left++;
        i++;
    }
    else if(arr[i]==2){
        swap(arr[i],arr[right]);
        right--;
    }
    else{
        i++;
    }
    cout<<arr[i]<<endl;

}


}