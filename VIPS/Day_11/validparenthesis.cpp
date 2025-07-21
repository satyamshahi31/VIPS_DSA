#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<int>st;

    for(char c : s){
        if(c =='(' || c == '{' || c =='['){
            st.push(c);
        }
        else{
            if(st.empty()){
                return false;
            }

            char ch = st.top();
            if((c == ')' && ch != '(' )|| (c == '}' && ch != '{') || (c == ']' && ch != '[')){
                return false;
            }
            st.pop();
        }

    }
    return st.empty();
}

int main()
{
    string s="(({{[{]}}))";
    cout<<(isValid(s) ? "true" :  "false");
    return 0;
}