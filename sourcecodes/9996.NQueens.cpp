#include<iostream>
using namespace std;


bool canPlace(char board[][100],int row,int col,int n){


    for(int i=0;i<n;i++){
        if(board[i][col]==1){
            return false;
        }
    }
    /// Diagonals
    ///Top Left
    int i=row,j=col;
    while(i>=0&&j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    ///Top Right
    i=row,j=col;
    while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }

    return true;
}



bool solveNQueen(char board[][100],int n,int row){
    if(row==n){
        ///Print the board

        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                if(board[x][y]==1)
                cout<<1<<" ";
                else
                cout<<0<<" ";
            }
            cout<<endl;

        }
        cout<<endl<<endl;

        return false;
    }

    ///Recursive Case

    ///Try to place the queen in the current row

    for(int pos=0;pos<n;pos++){

            if(canPlace(board,row,pos,n)){
                    board[row][pos]=1;

                    if(solveNQueen(board,n,row+1))
                        return true;


                    board[row][pos]=0;
            }

    }
    ///Backtracking
    return false;
}

int main(){

    char board[100][100]={0};

    int n;
    cin>>n;
    if(n==2||n==3)
        cout<<"Not possible";


    solveNQueen(board,n,0);


return 0;
}
