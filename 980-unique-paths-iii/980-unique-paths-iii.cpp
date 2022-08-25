class Solution {
public:
    int countPaths(vector<vector<int>> arr, int r, int c, int cells)
    {
        if (arr[r][c] == 2)
        {
            if (cells == 0)
            {
                return 1;
            }
        }
        if (arr[r][c] == -1 || arr[r][c] == 3)
        {
            return 0;
        }
        int count = 0;
        arr[r][c] = 3;
        if (r < arr.size() - 1) // Can excced r + 1
            count += countPaths(arr, r + 1, c, cells - 1);
        if (r > 0)
            count += countPaths(arr, r - 1, c, cells - 1);
        if (c < arr[0].size() - 1)
            count += countPaths(arr, r, c + 1, cells - 1);
        if (c > 0)
            count += countPaths(arr, r, c - 1, cells - 1);

        arr[r][c] = 0;

        return count;
    }

    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int row(0);
        int col(0);
        int cellsRemaining(0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    row = i;
                    col = j;
                }
                else if(grid[i][j] != -1)
                {
                    cellsRemaining++;
                }
            }
        }
        return countPaths(grid, row, col, cellsRemaining);
    }
};