
func tribonacci(n int) int {
    mp := make(map[int]int)
    return helper(n, mp)
}

func helper(n int, mp map[int]int) int {
    if n == 0 {
        return 0
    }
    if n == 1 || n == 2 {
        return 1
    }
    if val, ok := mp[n]; ok {
        return val
    }

    mp[n] = helper(n-1, mp) + helper(n-2, mp) + helper(n-3, mp)
    return mp[n]
}