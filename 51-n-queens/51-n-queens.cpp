class Solution {
public:
   
    bool Check(vector<string> arr, int row, int col)
    {
        int i{0}, j{0};
        for (i = 0; i < col; i++)
        {
            if (arr[row][i] == 'Q')
            {
                return false;
            }
        }
        for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (arr[i][j] == 'Q')
            {
                return false;
            }
        }
        for (i = row, j = col; i < arr.size() && j >= 0; i++, j--)
        {
            if (arr[i][j] == 'Q')
            {
                return false;
            }
        }
        return true;
    }
    
    void NQueens(vector<string> &arr, int col, vector<vector<string>> &ans)
    {
        if (col >= arr.size())
        {
            ans.push_back(arr);
            return;
        }
    
        for (int i = 0; i < arr.size(); i++)
        {
            if (Check(arr, i, col))
            {
                arr[i][col] = 'Q';
                NQueens(arr, col + 1, ans);
                arr[i][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n)
    {
        string str(n, '.');
        vector<string> arr(n, str);
        vector<vector<string>> ans;
        NQueens(arr, 0, ans);
        return ans;
    }
        
        
/*
        Runtime: 1345 ms, faster than 5.08% of C++ online submissions for N-Queens.
        Memory Usage: 463.9 MB, less than 5.81% of C++ online submissions for N-Queens.
    
*/
//     bool Check(vector<string> arr, int row, int col)
//     {
//         int i{0}, j{0};
//         for (i = 0; i < col; i++)
//         {
//             if (arr[row][i] == 'Q')
//             {
//                 return false;
//             }
//         }
//         for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         {
//             if (arr[i][j] == 'Q')
//             {
//                 return false;
//             }
//         }
//         for (i = row, j = col; i < arr.size() && j >= 0; i++, j--)
//         {
//             if (arr[i][j] == 'Q')
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
//     bool countQueens(vector<string> arr)
//     {
//         int count = 0;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             for (int j = 0; j < arr.size(); j++)
//             {
//                 if (arr[i][j] == 'Q')
//                 {
//                     count++;
//                 }
//             }
//         }
//         if (count >= arr.size())
//         {
//             return true;
//         }
//         return false;
//     }
    
//     vector<vector<string>> NQueens(vector<string> &arr, int col, vector<vector<string>> &ans)
//     {
//         if (col >= arr.size())
//         {
//             return ans;
//         }
    
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (Check(arr, i, col))
//             {
//                 arr[i][col] = 'Q';
//                 if (countQueens(arr))
//                 {
//                     ans.push_back(arr);
//                 }
//                 NQueens(arr, col + 1, ans);
//                 arr[i][col] = '.';
//             }
//         }
//         return ans;
//     }
    
//     vector<vector<string>> solveNQueens(int n)
//     {
//         string str(n, '.');
//         vector<string> arr(n, str);
//         vector<vector<string>> ans;
//         return NQueens(arr, 0, ans);
//     }
};