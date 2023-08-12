func getConcatenation(nums []int) []int {
    if len(nums) == 0 {
        return []int{}
    } 
    ans := make([]int, len(nums)*2)
    k := 0
    j := len(nums)
    for i := 0; i < len(nums); i++ {
        ans[i] = nums[k]
        ans[j] = nums[k]
        k++
        j++
    }
    return ans
}