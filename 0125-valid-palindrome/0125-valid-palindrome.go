func isPalindrome(s string) bool {
    i, j := 0, len(s) - 1
    for i < j {
        if !isAlphaNum(s[i]) {
            i++
            continue
        }
        if !isAlphaNum(s[j]) {
            j--
            continue
        }
        if(toLower(s[i]) != toLower(s[j])) {
            return false
        }
        i++
        j--
    }   
    return true
}
func isAlphaNum(char byte) bool {
    if (char >= 'A' && char <= 'Z') || 
       (char >= 'a' && char <= 'z') ||            
       (char >= '0' && char <= '9') {
        return true
    }
    return false
}
func toLower(char byte) byte {
    if char >= 'A' && char <= 'Z' {
        return char + ('a' - 'A')
    }
    return char
}