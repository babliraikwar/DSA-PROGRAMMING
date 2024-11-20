#include <iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=80){
        cout<<"you get A grade:"<<endl;
    }
    else if(marks>=60){
        cout<<"you get B grade:"<<endl;
    }
    else if(marks>=33){
        cout<<"you get c grade:"<<endl;
    }
    else{
        cout<<"you need to improve yourself."<<endl;
    }
}