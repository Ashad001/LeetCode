class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
        {
            return x;
        }
            
        long i = 1, res = 0;
        while(res <= x)
        {
            i++;
            res = i * i;
        }
        return (i - 1);            
    }
};