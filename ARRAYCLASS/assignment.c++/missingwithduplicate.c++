#include <iostream>
using namespace std;
void findmissdupli(int a[],int n){
    for(int i=0;i<n;i++){
        int index=abs(a[i]);
        if(a[index-1]>0){
            //visited method
            a[index-1]*=-1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<"missing number"<<i+1<<" ";
        }
    }
}
int main(){
    int a[]={1,3,5,3,4};
    int n=sizeof(a)/sizeof(int);
    findmissdupli(a,n);
}