func replaceElements(arr []int) []int {
    prev := arr[len(arr) - 1]
    next := 0
    arr[len(arr) - 1] = -1
    
    for i := len(arr) - 2; i >= 0; i-- {
        next = prev
        if arr[i] > prev {
            next = arr[i]
        }
        arr[i] = prev
        prev = next
    }
    return arr
}