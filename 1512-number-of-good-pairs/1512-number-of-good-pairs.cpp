class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     
        int output = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i; j < nums.size(); j++)
            {
                if(nums[i] == nums[j] && i < j)
                {
                    output++;
                }
            }
            
        }
        return output;
    }
};