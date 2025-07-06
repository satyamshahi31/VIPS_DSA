#include<iostream>
using namespace std;
int main()
{
    int a;
    char ch[100];

    cin>>a;
    cin.ignore();
    cin.getline(ch, 100); 
    cout<<a << endl;
    cout<<ch<<endl;
    return 0; 
}