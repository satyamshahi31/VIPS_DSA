#include<iostream>
using namespace std;

int firstindex4(int *a , int n){

    if(n==0){
        return -1;
    }
    if(a[0] == 4){
        return 0;
    }

    int ans = firstindex4(a+1 , n-1);
    if(ans != -1){
        return ans+1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,4,5,6,4,7,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<firstindex4(arr , n)<<endl;


    return 0;

}