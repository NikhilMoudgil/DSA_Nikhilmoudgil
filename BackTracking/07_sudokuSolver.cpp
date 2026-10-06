/*Sudoku Solver
Psudo code:
ss(sudoku[]row,col){
 1. check id no. already their
    next cell call
for(int dig=1 to 9){
    ss[row][col]=dig
    ,next cell call
    
  }
}


*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
    // Boolean arrays to track numbers 1-9 (0-indexed as 0-8)
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                int num = board[r][c] - '1'; // Map '1'-'9' to 0-8
                int box_idx = (r / 3) * 3 + (c / 3);

                // If number already exists in current row, col, or box
                if (rows[r][num] || cols[c][num] || boxes[box_idx][num]) {
                    return false;
                }

                // Mark the number as seen
                rows[r][num] = true;
                cols[c][num] = true;
                boxes[box_idx][num] = true;
            }
        }

        return true;
    }
};