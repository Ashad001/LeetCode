func isPerfectSquare(num int) bool {
    if num == 1 {
        return true
    }
    // Optimal: Binary Search
    start, end := 1, num
    for start < end {
        mid := (start + end) / 2
        if (mid * mid) == num {
            return true 
        } else if (mid * mid) < num {
            start = mid + 1
        } else {
            end = mid
        }
    }
    return false
    
    // Brute Force
    for i := 0; i < num; i++ {
        if (i * i) == num {
            return true
        }
    }
    return false
    
}