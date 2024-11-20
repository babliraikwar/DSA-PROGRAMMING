#include <iostream>
using namespace std;
int main(){
    int h, m, e,p,c;
    cin>>m>>h>>e>>p>>c;
    int percent=(h+m+e+c+p)*100/500;
    cout<<"percent="<<percent;
}
