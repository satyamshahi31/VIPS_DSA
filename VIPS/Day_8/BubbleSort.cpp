#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,4,3,2,1};
    int n = 5;

    for(int i = 0 ; i <5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0 ; i <= n-2 ; i++){
        for(int j = 0 ; j <= n-2 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i <5 ; i++){
        cout<<arr[i]<<" ";
        
    }

    return 0;
}