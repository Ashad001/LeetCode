class Solution {
public:
    int addDigits(int num) {
        
        if(num < 10)
        {
            return num;
        }
        return addDigits(SUM(num));
            
    }
    int SUM(int num)
    {
        int sum = 0;
        while(num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};