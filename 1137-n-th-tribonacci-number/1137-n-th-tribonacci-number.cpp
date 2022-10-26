class Solution {
public:
    int tribonacci(int n) {
        if(n <= 0)
            return 0;
        if(n <= 2)
            return 1;
        long long int first = 0;
        long long int second = 1;
        long long int third = 1;
        long long int num = 0;
        for(int i = 2; i < n; i++)
        {
            num = first + second + third;
            first = second; 
            second = third;
            third = num;
        }
        return num;
    }

    
};