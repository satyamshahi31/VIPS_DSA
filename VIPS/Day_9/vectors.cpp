#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // vector<int>v(10);  //empty vector of size 10
    // vector<int>v1(10 , 1);  //

    vector<int>v2;
    v2.push_back(7);
    v2.push_back(6);
    v2.push_back(8);
    v2.push_back(9);

    for( auto i = v2.begin(); i!= v2.end(); i++){
        cout<<*(i)<<" ";

    }
    cout<<endl;


    sort(v2.begin(),v2.begin()+2);
    for( auto i = v2.begin(); i!= v2.end(); i++){
        cout<<*(i)<<" ";

    }


    return 0;
}