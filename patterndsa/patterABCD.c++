#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        char ch;
        for(j=0;j<i+1;j++){
            int num=j+1;
            ch= num + 'A'-1;
            cout<<ch;
        }
        for(char alphabet=ch;alphabet>'A';){
            alphabet--;
            cout<<alphabet;
        }
        cout<<endl;
    }
}