#include <iostream>
#include <vector>
using namespace std ;

// 建立bool判断当前位置是否安全
bool isSafe( vector<vector<int>>& board , int row , int col )  
{
    for ( int i = 0 ; i < row ; i++ ) 
    {
        if ( board[i][col] == 1 ) 
        {
            return false;
        }
    }

    // 检查当前位置的左上方对角线是否安全
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
    {
        if ( board[i][j] == 1 ) 
        {
            return false;
        }
    }

    // 检查当前位置的右上方对角线是否安全
    for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++) 
    {
        if ( board[i][j] == 1 ) 
        {
            return false;
        }
    }

    return true;
}

// 建立回溯函数，使用递归的方式遍历每一行每一列是否可以放置皇后
void solveNQueens(vector<vector<int>>& board, int row, vector<vector<vector<int>>>& solutions) 
{
    int n = board.size();

    // 找到一组解
    if (row == n) 
    {
        solutions.push_back(board);
        return;
    }

    // 尝试在当前行的每个位置放置皇后
    for ( int col = 0 ; col < n ; col++ ) 
    {
        if ( isSafe ( board , row , col ) ) {
            board[row][col] = 1 ; // 放置皇后

            // 递归处理下一行
            solveNQueens( board , row + 1 , solutions );

            board[row][col] = 0 ; // 回溯，撤销当前位置的皇后
        }
    }
}

// 输出解
void printSolution(vector<vector<int>>& board) 
{
    int n = board.size();
    // 以矩阵形式输出
    for ( int i = 0 ; i < n ; i++ ) 
    {
        for ( int j = 0; j < n; j++ ) 
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() 
{
    int n = 8 ; // 设置棋盘大小
    vector<vector<int>> board(n, vector<int>(n, 0)); // 初始化棋盘

    vector<vector<vector<int>>> solutions; // 存储所有解

    solveNQueens(board, 0, solutions); // 解决八皇后问题

    // 输出每一个解
    for (int i = 0; i < solutions.size(); i++) 
    {
        cout << "No." << i + 1 << ":" << endl;
        printSolution(solutions[i]);
    }

    cout << "Total solutions: " << solutions.size() << endl;

    return 0 ;
}