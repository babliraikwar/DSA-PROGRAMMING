#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"enter input for row ndex:"<<i<<"enter input for column index:"<<j<<endl;
            cin>>arr[i][j];
        }
    }
    return 0;
}