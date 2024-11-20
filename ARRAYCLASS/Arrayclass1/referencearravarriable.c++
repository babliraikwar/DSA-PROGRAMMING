#include <iostream>
using namespace std;
int main(){
    int n=5;
    int &k=n;
    int &c=n;
    k++;
    cout<<"n:"<<n<<endl;
    cout<<"k:"<<k<<endl;
    cout<<"c:"<<c<<endl;
}