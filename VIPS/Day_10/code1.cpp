#include<iostream>
#include<stack>
using namespace std;

void printstack(stack<int>st)
{
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

}



int main()
{
    stack<int>s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    printstack(s);



    return 0;
}