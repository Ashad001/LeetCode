func mySqrt(x int) int {
    // Binary Search
    start , end := 1, x 
    for start <= end {
        mid := start + ((end - start)  / 2)
        if (mid * mid) == x {
            return mid
        } else if (mid * mid) > x {
            end = mid - 1
        } else {
            start = mid + 1
        }
    }
    return end
}