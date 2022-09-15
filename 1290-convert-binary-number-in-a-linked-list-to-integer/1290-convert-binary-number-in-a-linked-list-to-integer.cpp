/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int count(ListNode *head)
    {
        int c = 0;
        ListNode *temp = head;
    
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }
    int getDecimalValue(ListNode *head)
    {
        long long bin = 0;
        ListNode *temp = head;
        int i = count(temp) - 1;
        while (temp != NULL)
        {
            bin += (temp->val) * pow(2, i);
            temp = temp->next;
            i--;
        }

        return bin;
        
    }
};
