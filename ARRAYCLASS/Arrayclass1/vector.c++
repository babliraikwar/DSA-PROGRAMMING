#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>v){
cout<<"printing vector"<<endl;
int size=v.size();
for(int i=0;i<size;i++){
    cout<<v.at(i)<<endl;
}
}
int main(){
    vector<char>v;
    v.push_back('w');
    v.push_back('a');
    v.push_back('a');
    v.push_back('w');

     cout<<"front ele:"<<v[0]<<endl;
     cout<<"font ele"<<v.front()<<endl;
     cout<<"end ele"<<v[v.size()-1]<<endl;
          cout<<"font ele"<<v.back()<<endl;

     
    vector<int>arr;
    vector<int>arr2(5,-1);
    arr2.push_back(50);
    print(arr2);
    vector<int>arr3={1,2,3,44,5};
    print(arr3);

    vector<int>arr4={1,2,3,4,4,};
    vector<int>arr6(arr4);
    print(arr6);



}