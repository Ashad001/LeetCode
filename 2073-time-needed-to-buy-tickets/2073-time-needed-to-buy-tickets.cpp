class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i = 0;
        int count = 0;
        while(tickets[k] != 0)
        {
            for(i = 0; i < tickets.size(); i++)
            {
                if(tickets[i] > 0)
                {
                    count++;
                    --tickets[i];
                }
                if(tickets[k] == 0)
                {
                    return count;
                }
            }
            
        }
        
        
        return count;
    }
};