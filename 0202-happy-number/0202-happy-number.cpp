class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        while(n >= 10)
        {
            for(sum = 0; n > 0; n /= 10)
            {
                sum += (n % 10) * (n % 10);
            }
            n = sum;
        }
        if(n == 1 || n == 7)
            return true;
        return false;
    }
};