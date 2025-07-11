#include<iostream>
using namespace std;

void generateparenthesis(char *a , int i , int open , int close , int n){
    if(i == 2 * n){
        a[i] ='\0';
        cout<<a<<endl;
        return ;
    }
    if(open > close){
        a[i] = ')';
        generateparenthesis(a , i + 1 , open ,close+1 , n);
    }
    if(open < n){
        a[i] = '(';
        generateparenthesis(a , i+1, open +1 ,close , n);
    }
}

int main()
{
    int n;
    cin>>n;
    char a[100];
    generateparenthesis(a, 0,0,0,n);
    return 0;
    
} 

