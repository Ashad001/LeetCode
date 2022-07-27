class Solution {
public:
    int numberOfMatches(int n) {
      int win = 0, lose = 0;
        if(n == 1)
        {
            return win;
        }
        if(n % 2 == 0)
        {
            win = n / 2;
            lose = n / 2;
        }
        else
        {
            win = (n - 1) / 2;
            lose = (n - 1) / 2 + 1;
        }
        return win + numberOfMatches(lose);
            
    }
};