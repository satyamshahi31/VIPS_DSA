#include<iostream>
using namespace std;

int sol[100][100];
bool RatInMaze(char maze[][100], int i , int j , int n , int m){


if( i == n-1 and j == m-1){
     sol[i][j]=1;
    for(int k = 0 ; k < n ; k++){
        for(int l = 0 ; l <m ; l++ ){
            cout<<sol[k][l];
        }
        cout<<endl;
    }
    cout<<endl;
    return false;
}


sol[i][j]=1;

//check for maze in right side

if(j+1 < m and maze[i][j+1] != 'X'){
    bool isMazeSolvedForRight = RatInMaze(maze , i , j+1 , n , m);
    if(isMazeSolvedForRight == true){
        return true;
    }
}

//check for maze in down
if( i+1 < n and maze[i+1][j] != 'X'){

    bool isMazeSolvedForDown = RatInMaze(maze , i+1 , j , n , m);
    if(isMazeSolvedForDown == true){
            return true;
    }
}

sol[i][j]= 0;
return false;
}

int main()
{
    char maze[][100]= {
        "0000",
        "00XX",
        "0000",
        "XX00"
    };

    RatInMaze(maze , 0,0,4,4);
    return 0;
    
}