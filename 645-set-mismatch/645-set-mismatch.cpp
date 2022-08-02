class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     int start = 0;
    int end = nums.size();
    while (start < end)
    {
        int index = nums[start] - 1;
        if (nums[start] != nums[index])
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
        if(nums[i] != i + 1)
        {
            return {nums[i], i+1};
        }
    }
    return {-1,-1};   
    }
};