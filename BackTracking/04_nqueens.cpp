/*N Queen Problem
in chess queen can move vertically , horizonataly , and diaginaly
 We have n*n chess board
 Variations of n-queen ->
 1. chessboard n*n  -> yes/no /if answer exist or not
 2. all possible answers
 3. count of all solution

 We will print all possile solution

 //Approach
 N=2
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printBoard(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"  ______________    \n";
}

void nQueens(vector<vector<char>>board,int row){
    int n=board.size();
    if(row==n){
        printBoard(board);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        board[row][j]='Q';
        nQueens(board,row+1);
        board[row][j]='.';
    }
    
}

int main()
{
    vector<vector<char>> board;
    int n = 2;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    nQueens(board,0);

    return 0;
}