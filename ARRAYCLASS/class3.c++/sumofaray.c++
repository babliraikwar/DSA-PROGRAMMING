#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
    int col=3;
    int row=3;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];

        }
        cout<<sum<<endl;
    }
    cout<<"column by sum"<<endl;
     for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[j][i];

        }
        cout<<sum<<endl;
    }
       
       
}