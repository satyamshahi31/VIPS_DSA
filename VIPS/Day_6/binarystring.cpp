#include<iostream>
using namespace std;

int binary(int n , int ld){

    if( n == 0){
        return 0;
    }
    if(n == 1){
        if(ld == 0){
            return 2;
        }
        else{
            return 1;
        }
    }

    if(ld == 0){
        return binary(n-1,0)+binary(n-1,1);
    }
    else{
        return binary(n-1,0);
    }

}

int main()
{
    int n;
    cin>>n;

    cout<<binary(n, 0);
    return 0;
}