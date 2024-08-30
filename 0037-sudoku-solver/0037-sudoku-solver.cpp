class Solution {
public:
    bool isValid(vector<vector<char>> &board, int r , int c, char v) {
        for(int i = 0; i < board.size(); i++) {
            if (board[r][i] != '.' && board[r][i] == v) {
                return false;
            } 
            if (board[i][c] != '.' && board[i][c] == v) {
                return false;
            }
            if (board[3 * (r/3) + (i/3)][3 * (c/3) + (i%3)] == v) {
                return false;
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    for (int k = '1'; k <= '9'; k++) {
                        if(isValid(board, i, j, k)) {
                            board[i][j] = k;
                            if (helper(board) == true) {
                                return true;
                            } 
                            else {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }  
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board);
    }
    
    
};