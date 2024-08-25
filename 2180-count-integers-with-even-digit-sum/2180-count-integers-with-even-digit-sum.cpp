class Solution {
public:
    int countEven(int num) {
        int res = 0;
        for(int i = 2; i <= num; i++) {
        
            int rem = 0;
            int t = i;
            while(t > 0) {
                rem += t % 10;
                t /= 10;
            }
            if (rem % 2 == 0) {
                res++;
            }
        }
        return res;
    }
};