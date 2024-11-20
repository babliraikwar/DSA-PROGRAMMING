#include <iostream>
using namespace std;
float cirle_area( float radius){
    float area=3.14*radius*radius;
    return area;
}
int main(){
    int radius;
    cin>>radius;
    float area=cirle_area(radius);
    cout<<area;
}