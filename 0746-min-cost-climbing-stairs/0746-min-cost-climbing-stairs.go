func minCostClimbingStairs(cost []int) int {
    if len(cost) <= 2 {
        return min(cost[0], cost[1])
    }  
    a, b, c := cost[len(cost) - 2], cost[len(cost) - 1], 0
    for i := len(cost) - 3; i >= -1; i-- {
        a += min(b, c)
        c = b 
        b = a
        if i >= 0 {
            a = cost[i]        
        }
    }
    return min(b, c)
}
func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}
