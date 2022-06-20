class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> out(2 * nums.size());
        int i = 0;
        for(i = 0; i < nums.size(); i++)
        {
            out[i] = nums[i];
            out[nums.size() + i] = nums[i];
        }
        return out;
    }
};