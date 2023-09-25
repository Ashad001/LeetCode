func numOfSubarrays(arr []int, k int, threshold int) int {
    output := 0
    currSum := 0
    for i := 0; i < k - 1; i++ {
        currSum += arr[i]
    }
    for i := 0; i < (len(arr) - k + 1); i++ {
        currSum += arr[i + k - 1]
        if (currSum / k) >= threshold {
            output++
        }
        currSum -= arr[i]
    }
    return output
    
}