class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return BinarySearch(matrix, target);
    }
    
    bool BinarySearch(vector<vector<int>> &nums, int target)
    {
        int floor = findFloor(nums, target);
        if(floor == -1)
            return 0;
        int start = 0;
        int end = nums[floor].size() - 1;
        if(end == 0 && nums[floor][end] == target)
            return 1;
        else if(end == 0 && nums[floor][end] != target)
            return 0;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[floor][mid] == target)
                return 1;
            else if(nums[floor][mid] < target)
                start = mid + 1;
            else 
                end = mid - 1;
        }
        return 0;
    }
    int findFloor(vector<vector<int>>& num, int target)
    {
        int start = 0;
        int end = num.size() - 1;
        if(end == 0)
            return 0;
   
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(num[mid][0] == target)
                return mid;
            else if(num[mid][0] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return end;
    }
        
};
