func numMatchingSubseq(s string, words []string) int {
    output := 0
    for _, word := range words {
        res := isSubsequence(word, s)
        if res {
            output++
        }
    }
    return output
}
func isSubsequence(s string, t string) bool {
    i, j := 0, 0
    for i < len(s) && j < len(t) {
        if s[i] == t[j] {
            i++
            if i == len(s) {
                return true
            }
        }
        j++
    }
    return false
}