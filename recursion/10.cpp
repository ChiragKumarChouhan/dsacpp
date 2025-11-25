#include <vector>
using namespace std;

class Solution {
public:
    bool issafe(vector<vector<char>>& board, int row, int col, char dig) {
        // Check row
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == dig) return false;
        }

        // Check column
        for (int j = 0; j < 9; j++) {
            if (board[j][col] == dig) return false;
        }

        // Check 3x3 grid
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;
        for (int i = srow; i < srow + 3; i++) {
            for (int j = scol; j < scol + 3; j++) {
                if (board[i][j] == dig) return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board, int row, int col) {
        if (row == 9) return true; // All rows done

        if (col == 9) // Move to next row
            return solve(board, row + 1, 0);

        if (board[row][col] != '.') // Skip filled cells
            return solve(board, row, col + 1);

        for (char dig = '1'; dig <= '9'; dig++) {
            if (issafe(board, row, col, dig)) {
                board[row][col] = dig;
                if (solve(board, row, col + 1))
                    return true;
                board[row][col] = '.'; // backtrack
            }
        }

        return false; // No valid digit found
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
};
