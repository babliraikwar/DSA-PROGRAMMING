#include <bits/stdc++.h>
#include <climits>
using namespace std;
void keypair(int arr[],int n,int key){
    int l=0;
    int h=n-1;
    while(l<h){
        int csum=arr[l]+arr[h];
        if(csum==key){
          cout<<"yes";
          break;
        }
        
        else if(csum>key)
        { 
            h--;
            if(csum==key){
               cout<<"yes";
               break;
            }
        }
        
        else if(csum<key){
            l++;
            if(csum==key){
                cout<<"yes";
                break;
            }
        }
        else{
                cout<<"no";
                
            }
            
        }
     }

   

int main(){
    int arr[]={1,4,45,6,8};
    int n=5;
    int key=46;
    sort(arr,arr+n);
    keypair(arr,n,key);
 //out<<ans;
}