#include<iostream>
using namespace std;
void func(int x){
    x = x+5;
    cout<<x<<endl;
}


int main()
{
    int x = 10; // original
    cout<<"Before passing"<<x<<endl;  //10

    func(x);   //15
    cout<<"After passing"<<x<<endl;  //10
}