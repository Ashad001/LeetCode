func climbStairs(n int) int {
    if n < 2 {
        return 1;
    }
    first, second := 1, 1;
    third := 0;
    for n > 1 {
        third = first + second;
        first = second;
        second = third;
        n--;
    }
    return third;
}