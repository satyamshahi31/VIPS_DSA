#include<iostream>
using namespace std;

bool isSafeToPut(int board[][100] , int i , int j , int n){
    for(int k = 0 ;k < n ; k++){
        if(board[k][j]==1 || board[i][k] == 1){
            return false;
        }
    }
    int k = i ; 
    int l = j;
    while(i>=0 and j < n){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j++;

    }
    while( k >= 0 and l >= 0){
        if(board[k][l] == 1){
            return false;
        }
        k--;
        l--;

    }

    return true;
}


bool NQueen(int board[][100] , int i , int n){

if(i == n){

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return true;
}

for(int j = 0 ; j < n ; j++){
    if(isSafeToPut(board , i , j , n)){
        board[i][j] = 1;
        bool isRemainingSolved = NQueen(board , i+1 , n);
        if(isRemainingSolved == true){
            return true;
        }
        board[i][j] = 0;
    }

}
return false;

}






int main()
{

    int board[100][100]={0};
    int n;
    cin>>n;

    NQueen(board , 0 , n);
    return 0;
}