class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        n = len(nums)
        @cache
        def helper(i, s):
            if i >= n:
                if s == target:
                    return 1
                return 0 
                
            plus = helper(i + 1, s + nums[i])
            neg  = helper(i + 1, s - nums[i])
                
            return plus + neg
        return helper(0, 0)