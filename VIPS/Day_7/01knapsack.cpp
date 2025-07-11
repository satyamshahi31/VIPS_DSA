#include<iostream>
using namespace std;
#include<climits>
int knapsack(int *wt , int *price , int capacity  , int n){
    if(n == 0 || capacity == 0){
        return 0;
    }

    int inc = INT_MIN;
    int exc =INT_MIN;
    if(capacity >= wt[n-1]){
        inc = price[n-1]+knapsack(wt , price , capacity-wt[n-1], n-1);
    }
    exc = 0+ knapsack(wt, price , capacity , n-1);

    return max(inc , exc);

}

int main()
{
    int wt[]= {1,2,3,5};
    int price[] ={20,50,60,100};

    cout<<knapsack(wt , price , 6 , 4);
    return 0;
}