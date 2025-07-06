#include<iostream>
using namespace std;
int x = 5; //global x
int main()
{
    int x = 1;
    if(x > 0 ){
        x = 10;
        cout <<x<<endl; 
    }
    cout<<::x<<endl;
    return 0;
}