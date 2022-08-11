class Solution {
public:
    void HeapSort(vector<int> &arr, int low, int high)
    {
        if(low >= high)
            return;
        int start = low;
        int end = high;
        int mid = start + (end - start) / 2;
        int pivot = arr[mid];
    
        while(start <= end)
        {
            while(arr[start] < pivot)
                start++;
            while(arr[end] > pivot)
                end--;
            
            if(start <= end)
            {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
    }
    HeapSort(arr, low, end);
    HeapSort(arr, start, high);
    }
    int maxProductDifference(vector<int>& nums) {
        HeapSort(nums,0 , nums.size() - 1);
        return ((nums[nums.size() - 2] * nums[nums.size() - 1]) - (nums[0] * nums[1]));
    }
    
};