#include <iostream>
using namespace std;
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {8,9,10,11}
};
int col=4;
int row=3;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"column wise"<<endl;
for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}

}