#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>v){
    cout<<"print vectoer"<<endl;
        int size=v.size();
    for(int i=0; i<size;i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
}
 void print2(vector<int>v){
    cout<<"print method 2 :"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

 }
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    print(v);
    print2(v);
}