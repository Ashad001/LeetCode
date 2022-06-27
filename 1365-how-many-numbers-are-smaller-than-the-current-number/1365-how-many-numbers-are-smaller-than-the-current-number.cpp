class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> out(nums.size());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] > nums[j] && i != j)
                {
                    sum++;
                }
            }
            out[i] = sum;
        }
        return out;
    }
};