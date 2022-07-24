class Solution {
public:
    string interpret(string command) {
        string output = "";
        for(int i = 0 ; i < command.length(); i++)
        {
            if(command[i] == 'G')
                output += command[i];
            else if(command[i] == '(' && command[i+1] == ')')
            {
                output += 'o';
                i++;
            }
            else if(command[i] == '(' && command[i+1] == 'a')
            {
                output += "al";
                i+=3;
            }
        }
        return output;
    }
};