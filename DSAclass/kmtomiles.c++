#include <iostream>
using namespace std;
float kmtomiles(float km){
    float kmmile=0.621371;
    float miles=km * kmmile;
    return miles;
}
int main(){
    float km;
    
    cout<<"tell me km"<<endl;
    cin>>km;
    float miles=kmtomiles(km);
    cout<<"miles="<<miles;
    
}