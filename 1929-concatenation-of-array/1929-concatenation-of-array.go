func getConcatenation(nums []int) []int {
    if len(nums) == 0 {
        return []int{}
    } 
    ans := make([]int, len(nums)*2)
    for i := 0; i < len(ans); i++ {
        ans[i] = nums[i % len(nums)]
    }
    return ans
}