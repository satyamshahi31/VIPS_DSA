#include<iostream>
using namespace std;
#include<ctime>
#include<algorithm>


void bubblesort(int arr[] , int n){
      for(int i = 0 ; i <= n-2 ; i++){
        for(int j = 0 ; j <= n-2 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main()
{
   int n ;
   cin>>n;
   int arr[n];

    for(int i = 0 ; i <n ; i++){
        arr[i] = n-i;
    }

    time_t start = clock();
    bubblesort(arr , n);
    time_t end = clock();

    cout<<"Time taken by bubble sort"<<end-start<<endl;


    for(int i = 0 ; i <n ; i++){
        arr[i] = n-i;
    }
   

    start = clock();
    sort(arr, arr+n);
    end = clock();


    cout<<"Time taken by quick sort"<<end-start<<endl;


   

    


    return 0;
}