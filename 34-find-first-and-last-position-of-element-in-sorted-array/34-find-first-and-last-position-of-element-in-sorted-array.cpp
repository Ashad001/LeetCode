class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out = {-1, -1};
        out[0] = Search(nums, target, true);
        out[1] = Search(nums, target, false);
        return out;
        
    }
    int Search(vector<int>& nums, int target, bool isStart)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(target < nums[mid])
                end = mid -1;
            else if(target > nums[mid])
                start = mid + 1;
            else 
            {
                ans = mid;
                if(isStart)
                    end = mid - 1;
                else 
                    start = mid + 1;
            }
        }
        return ans;
    }
};