#include<iostream>
#include<vector>
using namespace std;

void mincoins(int amount){
    vector<int>coins = {500,200,100,50,20,10,5,2,1};
    vector<int>ans;

    for(int i : coins){
        while(amount>=i){
            ans.push_back(i);
            amount = amount - i;
        }
    }
    for(int i : ans){
        cout<<i<<" ";
    }
    cout<s.s`ize();
    return;
}

int main()
{
    int n;
    cin>>n;
    mincoins(n);
    return 0;
}
