#include<iostream>
using namespace std;

int merge(int *a , int s , int e){
    int mid = (s+e)/2;

    int i= s;
    int j= mid+1;
    int k = s;
   int temp[1000];
   int cnt = 0;
    while(i<=mid && j <=e){
        if(a[i] < a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
            cnt += mid -i +1;
        }
    }
    while(i <= mid){
        temp[k++] = a[i++];
    }
    while(j <= e){
        temp[k++] = a[j++];
    }

    for(int i = s; i <=e; i++){
        a[i] = temp[i];
    }

}

int inversions(int a[], int s, int e){
    if( s>= e){
        return ;
    }
    int mid = (s+e)/2;

    int x =inversions(a, s, mid);
    int y =inversions(a, mid+1, e);

    int z=merge(a , s, e);

    return x+y+z;
}

int main()
{
    int a[100];
    int n ;
    cin>>n;

    for(int i = 0 ; i <n ; i++){
        cin>>a[i];
    }
    inversions(a, 0, n-1);

    for(int i = 0 ; i < n ; i++){
        cout<<a[i];
    }

    return 0;
}