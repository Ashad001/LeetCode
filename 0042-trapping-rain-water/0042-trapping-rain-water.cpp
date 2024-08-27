class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n, 0);
        vector<int> rightMax(n, 0);
        int left = 0;
        int right = 0;
        
        for (auto i = 1, j = n - 2; i < n, j > 0; i++, j--) {
            if (height[i - 1] > left) {
                left = height[i - 1];
            }   
            leftMax[i] = left;
            if (height[j + 1] > right) {
                right = height[j + 1];
            }
            rightMax[j] = right;
        }
        
        int count = 0;
        for (auto i = 0; i < n; i++) {
            int trap = (min(leftMax[i], rightMax[i]) - height[i]);
            if (trap > 0) {
                count+=trap;
            }
        }
        return count;
    }
    int min(int a, int b) {
        return a < b ? a : b;
    }
};