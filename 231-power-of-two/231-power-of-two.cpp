class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1)
            return 0;
        return !(n & (n - 1));
    }
};