#include<iostream>
using namespace std;

// int stairs(int n){
//     if(n == 0){
//         return 1;
//     }
//     if( n < 0){
//         return 0;
//     }
//     return stairs(n-1) + stairs(n-2)+ stairs(n-3); 

// 000,001,010,100,011,110,101,111
// }

  int kstairs(int n , int k){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    int ans = 0 ;
    for(int i = 1 ; i <= k ;i++ ){
        ans += kstairs(n-i , k);
    }
    return ans;
}

int main()
{
    int n = 5;
    cout<< stairs(n)<<endl;
    cout<<kstairs(n , 3)<<endl;
    return 0;
}