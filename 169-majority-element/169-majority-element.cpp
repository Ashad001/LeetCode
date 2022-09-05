class Solution {
public:
    int majorityElement(vector<int> &nums)
    {
        map<int,int> m;
        for(auto num : nums)
        {
            m[num]++;
        }
        int max = INT_MIN;
        int ind = -1;
        for(auto a : m)
        {
            if(a.second > max)
            {
                max = a.second;
                ind = a.first;
            }
        }
        return ind;
    }
};