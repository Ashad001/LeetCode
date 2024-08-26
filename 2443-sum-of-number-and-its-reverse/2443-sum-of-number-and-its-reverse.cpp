class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if (num == 0) {
            return true;
        }
        for (int i = num / 2; i < num; i++) {
            if (i + reverse(i) == num) {
                cout << i << ", " << reverse(i);
                return true;
            }
        }
        return false;
    }
    
    int reverse(int num) {
        int rev = 0;
        while(num > 0) {
            int rem = num % 10;
            rev = (rev * 10) + rem;                
            num /= 10;
        }
        return rev;
    }
};