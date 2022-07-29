class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> out(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            out[i] = nums[nums[i]];
        }
        return out;
    }
};