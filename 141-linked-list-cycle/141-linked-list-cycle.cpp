/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *curr = head;
        ListNode *Next = head;
        while(Next != NULL && Next->next != NULL)
        {
            curr = curr->next;
            Next = Next->next->next; // Had to do this :_)
            if(curr == Next)
            {
                return true;
            }
        }
        return false;
    }
};