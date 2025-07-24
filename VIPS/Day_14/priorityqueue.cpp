#include<iostream>
using namespace std;
#include<queue>


int main()
{
    priority_queue<int>pq;  // max heap - return maximum value
    priority_queue<int , vector<int>, greater<int>>pq1;   //min heap - returns minimum value
    pq.push(10);
    pq.push(40);
    pq.push(25);
   

    pq1.push(10);
    pq1.push(40);
    pq1.push(2);
    pq1.push(25);
    cout<<pq.top()<<endl;
    cout<<pq1.top()<<endl;
    return 0;

}