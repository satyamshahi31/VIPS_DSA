#include<iostream>
using namespace std;

bool isSorted(int *a , int n){
    if(n <= 1){
        return true;
    }
    if( (a[0] <= a[1]) && (isSorted(a+1 , n -1)==true)){
        return true;
    }
    return false;
}

int sumofdigits(int n){
    if(n==0){
        return 0;
    }

    int sum = n%10 + sum(n/10);
    return sum;

}
void dcb ( int dec , int base){
    if(dec < base){
        cout <<dec;  //1
        return 0;
    }

    dcb(dec/base, base);
    cout<<dec%base;

}



int exponent (int a , int x){
    if(x==0){
        return 1;
    }

    int ans=  a * exponent(a , x-1);
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if(isSorted(arr , n)){
        cout<<"Yes"<<" "<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
  
}
