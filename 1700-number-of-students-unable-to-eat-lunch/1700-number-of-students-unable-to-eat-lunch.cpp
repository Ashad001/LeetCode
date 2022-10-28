class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int i  = 0;
        queue<int> stChoice;
        for(auto st : students)
        {
            stChoice.push(st);
        }
        int rot{0};
        while(stChoice.size() && rot < students.size())
        {
            if(stChoice.front() ==  sandwiches[i])
            {
                i++;
                rot = 0;
                stChoice.pop();
            }
            else
            {
                int ch = stChoice.front();
                stChoice.pop();
                stChoice.push(ch);
                rot++;
            }
        }
        return stChoice.size();
    }
};