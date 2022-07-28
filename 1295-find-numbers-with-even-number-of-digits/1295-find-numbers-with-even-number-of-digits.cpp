class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(Count(nums[i]) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
    int Count(int num)
    {
        return log10(num) + 1;
    }
};