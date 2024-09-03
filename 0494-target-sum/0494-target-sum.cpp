class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        helper(nums, 0, 0, &count, target);
        return count;
    }
    
    void helper(vector<int> &nums, int sum, int i, int* count, int target) {
        if (i == nums.size()) {
            if (sum == target) {
                (*count)++;
            }    
        }
        else {
            helper(nums, sum + nums[i], i + 1, count, target);
            helper(nums, sum - nums[i], i + 1, count, target);
        }
        
        
    }
};