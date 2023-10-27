func lengthOfLIS(nums []int) int {
    dp := make([]int, len(nums))
    for i := range dp {
        dp[i] = 1
    }
    for i := len(nums) - 1; i >= 0; i-- {
        for j := i; j < len(nums); j++ {
            if nums[i] < nums[j] {
                dp[i] = max(dp[i], dp[j] + 1)
        
            }
        }
        
    } 
    return maxOfArr(dp);
    
}
func max(a, b int) int {
    if a > b {
        return a 
    }
    return b
}
func maxOfArr(nums []int) int {
    ret := -99999
    for i := range(nums) {
        if nums[i] > ret {
            ret = nums[i]
        }
    }
    return ret
}