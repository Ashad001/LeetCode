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
        string MyString = "";
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
                MyString += strs[0][i];
            }
            
        }
        
//         int c = 0;
//         string F;
//         for(int i=0; i<strs.size()); i++)
//             for(int j=0; j<strs[i].length)
//             {
//                 if(strs[i][j] == strs[i+1][j])
//                 {
//                     c += 1;
//                     F = F+strs[i][j];
//                 }
                
//             }
        return MyString;
    }
};