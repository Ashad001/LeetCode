class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
    int end = arr.size() - 1;
    while(start != end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] < arr[mid + 1])
            start = mid + 1;
        else 
            end = mid;
    }
    return start;
    }
};