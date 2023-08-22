func sortedSquares(nums []int) []int {
    res := make([]int, len(nums))
    i, j, k := 0, len(nums) - 1, len(nums) - 1
    for i <= j {
        if nums[i] * nums[i] >= nums[j] * nums[j] {
            res[k] = nums[i] * nums[i]
            i++
        } else {
            res[k] = nums[j] * nums[j]
            j--
        }
        k--
    }
    return res
}