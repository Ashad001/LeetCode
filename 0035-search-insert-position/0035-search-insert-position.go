func searchInsert(nums []int, target int) int {
    start := 0
    end := len(nums)
    for start < end {
        mid := (start + end) / 2
        if nums[mid] == target {
            return mid
        } else if nums[mid] < target {
            start = mid + 1
        } else {
            end  = mid
        }
    }
    return start
}