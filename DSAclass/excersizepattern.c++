#include <iostream>
using namespace std;
int main()
{
    int n;
    int i=1;
    cin>>n;
    while(i<n){
        int j=i,count=0;
        while(count<i)
{
    cout<<j;
    j=j+1;
    count=count+1;
    } 
    cout<<endl;
    i=i+1;
}

    
return 0;
}