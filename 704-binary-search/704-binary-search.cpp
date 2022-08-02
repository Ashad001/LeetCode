class Solution {
public:
    int search(vector<int>& nums, int target) {
        return Recursion(nums,target, 0, nums.size());
    }
    int Recursion(vector<int> &nums, int target, int start, int end)
    {
        int mid = start + (end - start) / 2;
        if(start >= end)
            return -1;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            return Recursion(nums,target, mid + 1, end);
        else 
            return Recursion(nums,target, start, end - 1);
    }
};