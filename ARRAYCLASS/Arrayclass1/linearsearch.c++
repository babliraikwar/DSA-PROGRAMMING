#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,7,8,4};
    int target=3;
    int n=5;
    bool flag=0;
    for(int i=0; i<n;i++){
        if(arr[i]==target){
            flag =1;
               break;
        }
        
        }
        if (flag==1){
            cout<<"target fount";
        }
        else{
            cout<<"notfound";
        }
    }
