func maxProfit(prices []int) int {
    if(len(prices) <= 1) {
        return 0
    }
    max := 0
    i := 0
    j := 1
    for j < len(prices) {
        if prices[i] < prices[j] {
            profit := prices[j] - prices[i]
            if profit > max {
                max = profit 
            }
            j++                
        } else {
            i = j
            j++
        }
    }
    return max
    
}