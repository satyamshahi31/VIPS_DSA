#include<iostream>
using namespace std;

int arraySum(int *a , int n){
    if (n == 0) {
        return 0;
    }
    return a[0] + arraySum(a+1,n-1 );
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<arraySum(arr, n)<<endl;

    return 0;
}