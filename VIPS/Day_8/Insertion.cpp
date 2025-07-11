#include<iostream>
using namespace std;

int main()
{


    int a[5] = {5,4,3,2,1};
    int n = 5 , i, j;

    cout<<"Before Sorting" <<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }

    for( i=1 ; i < n ; i++){
        int pickedupcard = a[i];
        for( j = i-1 ; j >=0 && a[j] > pickedupcard ; j-- ){
            a[j+1] = a[j];
        }
        a[j+1] = pickedupcard;
    }

    cout<<"After Sorting" <<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}