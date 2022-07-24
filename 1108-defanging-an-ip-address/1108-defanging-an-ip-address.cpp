class Solution {
public:
    string defangIPaddr(string address) {
        string NEW = "";
        for(int i = 0; i < address.length(); i++)
        {
            if(address[i] == '.')
            {
                NEW += "[.]";
            }
            else
            {
                NEW += address[i];
            }
        }
        return NEW;
    }
};