class Solution {
public:
    int fib(int n) {
        if(n < 0)
            return -1;
        if(n < 2)
            return n;
        return fib(n - 1) + fib(n - 2);
        
    }
};