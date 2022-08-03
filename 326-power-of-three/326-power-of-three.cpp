class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n < 1)
            return false;
        
        return (n == 1 || (n % 3 == 0) && (isPowerOfThree(n / 3))) ;
    }
};