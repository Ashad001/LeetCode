class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int a = strs[0].length();
        for(int i=0; i < strs.size(); i++)
        {
            if(strs[i].length() < a)
            {
                a = strs[i].length();
            }
        }
        
        bool check = 1;
        string LongestPrefix;
        for(int i=0; i < a && check == 1; i++)
        {
            for(int j=0; j < strs.size(); j++)
            {
                if(strs[0][i] != strs[j][i])
                {
                    check = 0;
                    break;
                }
            }
            if(check == 1)
            {
                LongestPrefix.push_back(strs[0][i]);
            }
            
        }
        
        return LongestPrefix;
    }
};
