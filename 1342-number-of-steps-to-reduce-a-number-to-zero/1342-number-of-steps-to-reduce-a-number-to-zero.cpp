class Solution {
public:
    int numberOfSteps(int num) {
        return Count(num, 0);
    }
    int Count(int num, int c)
    {
        if(num == 0)
        {
            return c;
        }
        if(num % 2 == 0)
        {
            return Count(num / 2, c+1);
        }
        else
        {   
            return Count(num - 1, c+1);
        }
    }

};