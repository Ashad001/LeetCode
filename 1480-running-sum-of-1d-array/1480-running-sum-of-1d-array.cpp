class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> out(nums.size());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            out[i] = sum; 
        }
        return out;
    }
};