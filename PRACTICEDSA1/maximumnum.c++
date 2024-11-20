#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"grater number is:"<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<" greater number is:"<<b<<endl;
    }
    else{
        cout<<"greater number is:"<<c<<endl;
    }
    }