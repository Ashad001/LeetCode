class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, mul = 1;
        while(n != 0)
        {
            int rem = n % 10;
            sum += rem;
            mul *= rem;
            n /= 10;
        }
        return mul - sum;
    }
};