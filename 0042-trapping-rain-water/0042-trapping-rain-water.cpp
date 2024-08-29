class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        
        int left = 0;
        int right = n - 1;
        int leftMax = height[0];
        int rightMax = height[n - 1];
        
        int count = 0;
        
        while (right > left) {
            if (leftMax < rightMax) {
                left++;
                leftMax = max(leftMax, height[left]);
                count += leftMax - height[left];
            } else {
                right--;
                rightMax = max(rightMax, height[right]);
                count += rightMax - height[right];
            }          
        }
        return count;
    }
    
    int min(int a, int b) {
        return a < b ? a : b;
    }
    
    int max(int a, int b) {
        return a > b ? a : b;
    }
};