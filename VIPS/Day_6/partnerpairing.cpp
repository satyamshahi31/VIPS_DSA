#include<iostream>
using namespace std;

int noofways(int n ){
    if(n == 0){
        return 0;

    }
    if( n == 1){
        return 1;
    }

    return noofways(n-1)+(n-2)*noofways(n-1);
}

int main(){
    int n ;
    cin>>n;

    cout<<noofways(n)<<endl;
}