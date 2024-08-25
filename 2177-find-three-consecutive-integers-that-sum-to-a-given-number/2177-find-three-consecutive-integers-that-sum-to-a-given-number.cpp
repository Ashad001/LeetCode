class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> res;
        if (num % 3 != 0) {
            return res;
        }   
        long long d = num / 3;
        res.push_back(d-1);
        res.push_back(d);
        res.push_back(d+1);
        return res;
    }
};