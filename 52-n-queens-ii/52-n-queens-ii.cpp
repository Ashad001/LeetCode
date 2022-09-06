class Solution {
public:
    bool Check(vector<vector<int>> &arr, int row, int col)
    {
        // Check column
        int i{0}, j{0};
        for (i = 0; i < row; i++)
        {
            if (arr[i][col] == 1)
            {
                return false;
            }
        }
        // Diagonals
        for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (arr[i][j] == 1)
            {
                return false;
            }
        }
        for (i = row, j = col; i >= 0 && j < arr.size(); i--, j++)
        {
            if (arr[i][j] == 1)
            {
                return false;
            }
        }
        return true;
    }
    int countQueens(vector<vector<int>> &arr, int row)
    {
        if (row >= arr.size())
        {
            return 1;
        }
    
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (Check(arr, row, i) == 1)
            {
                arr[row][i] = 1;
                count += countQueens(arr, row + 1);
                arr[row][i] = 0;
            }
      
        }
        return count;
    }
    int totalNQueens(int n)
    {
        vector<vector<int>> arr(n, vector<int>(n, 0));
        return countQueens(arr, 0);
    }
};
