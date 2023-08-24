func arrangeCoins(n int) int {
    start, end := 1, n
    for start <= end {
        mid := (start + end) / 2
        sum := mid * (mid + 1) / 2.0
        if sum > n {
            end = mid - 1
        } else if sum < n {
            start = mid + 1               
        } else {
            return mid
        }
    
    }
    return end
}