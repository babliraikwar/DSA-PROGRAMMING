#include <iostream>
using namespace std;
int main()
{
    char ch;
    if('a'<=ch || 'z'<=ch){
        cout<<0;
        }
    else if('A '<=ch || 'Z'<=ch){
      cout<<1;
    }
    else{
        cout<<-1;
    }
return 0;
}