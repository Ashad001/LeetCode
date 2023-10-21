func longestCommonSubsequence(text1 string, text2 string) int {
    m := len(text1) + 1
    n := len(text2) + 1
    dp := make([][]int, m)
    for i := range dp {
        dp[i] = make([]int, n)
        for j := range dp[i] {
            dp[i][j] = 0
        }
    }
    for i := 1; i < m; i++ {
        for j := 1; j < n; j++ {
            if (text1[i - 1] == text2[j - 1]) {
               dp[i][j] = dp[i - 1][j - 1] + 1
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
            }
        }
    }
    count := 0
    i, j := m - 1, n - 1 
    for i > 0 && j > 0 {
        if (text1[i - 1] == text2[j - 1]) {
            count++
            i--;
            j--;
        } else if (dp[i-1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    return count   
}
func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}