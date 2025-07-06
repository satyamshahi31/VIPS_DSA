#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char *c){
   int s = 0;
   int e = strlen(c) -1;

   while(s < e){
    if(c[s] != c[e]){
        return false;
    }
    s++;
    e--;
   }
   return true;
}

int main()
{
    char a[]="madam";
    if(isPalindrome(a)){
        cout<<"P"<<endl;
    }
    else{
        cout<<"NP"<<endl;
    }
    return 0;


}