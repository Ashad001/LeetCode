class Solution {
    public int missingNumber(int[] nums) {
        int start = 0;
        int end = nums.length;
        while(start < end)
        {
            int index = nums[start];
            if (nums[start] < end && nums[start] != nums[index])
            {
                int temp = nums[start];
                nums[start] = nums[index];
                nums[index] = temp;
            }
            else
                start++;
        }
        for(int i = 0; i < nums.length; i++)
        {
            if(nums[i] != i)
                return i;
        }
        return nums.length;
    }
}