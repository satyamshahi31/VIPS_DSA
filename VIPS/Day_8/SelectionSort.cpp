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
        int min = i;
        for(int j = i+1 ; j <= n-1 ; j++){
            if(arr[j]<arr[min]){
               min = j;
            }
        }
        swap(arr[i] , arr[min]);
    }
    for(int i = 0 ; i <5 ; i++){
        cout<<arr[i]<<" ";
        
    }

    return 0;
}