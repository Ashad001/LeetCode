func singleNonDuplicate(nums []int) int {
    if len(nums) == 1 {
        return nums[0]
    }
    start, end := 0, len(nums) - 1
    for start <= end {
        mid := start + ((end - start) / 2)
        if ((mid - 1 < 0 || nums[mid] != nums[mid - 1]) && (mid + 1== len(nums) || nums[mid] != nums[mid + 1])){
            return nums[mid]
        }
        left := mid
        if(nums[mid - 1]  == nums[mid]) {
            left = mid - 1
        } 
        if(left % 2 == 0) {
            start = mid + 1
        }else {
            end = mid - 1
        }
    }
    return -1
}