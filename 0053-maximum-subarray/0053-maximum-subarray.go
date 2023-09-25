func maxSubArray(nums []int) int {
    maxSum := nums[0]
    currSum := 0
    for _, n := range nums {
        currSum += n
        if currSum < n {
            currSum = n
        }
        if currSum > maxSum {
            maxSum = currSum
        }
        
    }
    return maxSum
}