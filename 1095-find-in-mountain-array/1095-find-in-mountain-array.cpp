/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
            int start = 0;
            int end = mountainArr.length() - 1;
            int peak = peakIndexInMountainArray(mountainArr);
            int ans = OrderAgnosticBS(mountainArr, target, start, peak, true);
            if(ans == -1)
                ans =OrderAgnosticBS(mountainArr, target, peak, end, false);
            return ans;
        
    }
    int peakIndexInMountainArray(MountainArray &mountainArr)
    {
        int start = 0;
        int end = mountainArr.length() - 1;
        while (start != end)
        {
            int mid = (start + end) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                start = mid + 1;
            else
                end = mid;
        }
        return start;
    }
    int OrderAgnosticBS(MountainArray &mountainArr, int target, int start, int end, bool isAsc)
    {
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (mountainArr.get(mid) == target)
                return mid;
            else if (isAsc)
            {
                if (mountainArr.get(mid) < target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else
            {
                if (mountainArr.get(mid) < target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return -1;
    }
};