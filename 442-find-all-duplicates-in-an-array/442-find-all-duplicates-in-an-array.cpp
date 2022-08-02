class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
            int start = 0;
    int end = nums.size();
  
    vector<int> out;
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
            out.push_back(nums[i]);
    }
    return out;   
    }
};