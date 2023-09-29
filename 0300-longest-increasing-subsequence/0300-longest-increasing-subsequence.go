func lengthOfLIS(nums []int) int {
    if len(nums) < 1 {
        return len(nums)
    }
    lengths := make([]int, len(nums))
    for i := range lengths {
        lengths[i] = 1
    }
    for i := range nums {
        subProb := make([]int, i)
        for j := 0; j < i; j++ {
            if nums[j] < nums[i] {
                subProb = append(subProb, lengths[j])
            } 
        }
        if len(subProb) > 0 {
            max := subProb[0]
            for _, value := range subProb {
                if value > max {
                    max = value
                }
            }
            lengths[i] = max + 1
        }        
    }
    max := lengths[0]
    for _, value := range lengths {
        if value > max {
            max = value 
        }
    }
    return max
    
    
}