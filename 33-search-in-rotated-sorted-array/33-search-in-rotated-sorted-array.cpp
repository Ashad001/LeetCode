class Solution {
public:
    int search(vector<int>& nums, int target) {
        int peak = SearchPeak(nums);
        int ans = BinarySearch(nums, target, 0, peak);
        if(ans == -1)
            ans = BinarySearch(nums, target, peak + 1, nums.size() - 1);
        return ans;
    }
    int SearchPeak(vector<int>& nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(end > mid && nums[mid] > nums[mid + 1])
                return mid;
            if(start < mid  && nums[mid] < nums[mid - 1])
                return mid - 1;
            if(nums[start] >= nums[mid])
                end = mid -1;
            else 
                start = mid + 1;
        }
        return start;
    }
    int BinarySearch(vector<int>& arr, int target, int start, int end)
    {
        while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
        return -1;
    }
};