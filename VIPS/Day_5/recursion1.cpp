#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}


int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<fibo(n)<<endl;

    return 0;
}