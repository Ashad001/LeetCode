class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        if (nums.size() == 0) {
            return 0;
        }
        int count = 0;
        for (auto n : nums) {
            if (s.find(n - 1) == s.end()) {
                int st = 1;
                while (s.find(n + 1) != s.end()) {
                    st++;
                    n++;

                }
                count = max(count, st);
            }
            
        }
        return count;
        
    }
};