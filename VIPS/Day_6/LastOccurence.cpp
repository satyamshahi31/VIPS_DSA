#include<iostream>
using namespace std;

int lastindex4(int *a , int n, int i){

    if(i==n){
        return -1;
    }
    if(a[i] == 4){
        int aglaindex = lastindex4(a, n , i+1);
        if(aglaindex == -1){
            return i;
        }
        return aglaindex;
    }

    else{
        int idx = lastindex4(a , n , i+1);
        if(idx != -1 ){
            return idx;
        }
        return idx;
    }
}

int main(){
    int arr[] = {1,2,4,5,6,4,7,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<lastindex4(arr , n,0)<<endl;


    return 0;

}