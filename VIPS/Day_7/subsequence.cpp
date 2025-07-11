#include<iostream>
using namespace std;
#include<cstring>

void subsequence (char* a , int i , int j , char *out){
    if(a[i] =='\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return ;
    }

    subsequence(a , i+1 , j , out);
    out[j] = a[i];
    subsequence(a, i+1 , j+1 , out);

}
int main()
{
    char a[]="abc";
    char out[100];

    subsequence(a, 0,0,out);
    return 0;
}