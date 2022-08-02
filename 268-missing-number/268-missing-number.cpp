class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int start = 0;
        int end = nums.size();
        if(nums[start] == 1 && end == 1)
            return 0;
        while(start < end)
        {
            int index = nums[start];
            if(nums[start] < end && nums[start] != nums[index])
            {
                int temp = nums[start];
                nums[start] = nums[index];
                nums[index] = temp;
            }
            else
                start++;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(i != nums[i])
                return i;
        
        }
        return nums.size();
    }
};