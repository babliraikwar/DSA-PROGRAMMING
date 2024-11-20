#include <iostream>
using namespace std;
//int main(int n)
 int increnum(int &k)
{
    k++;
    return k;
}
int main(){
int n;
cin>>n;
//n=incenum(n);
 increnum( n);
cout<<"n:"<<n;
    
}